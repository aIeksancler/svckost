import keyboard
import pygame
import os
import shutil
import sys
import time
import ctypes
import win32com.client

sound_press = os.path.join(sys._MEIPASS, "press.wav")
sound_release = os.path.join(sys._MEIPASS, "release.wav")

def get_executable_path():
    return getattr(sys, '_MEIPASS', os.path.abspath(os.path.dirname(sys.argv[0])))

def copy_to_autostart():
    script_path = os.path.abspath(sys.argv[0])
    autostart_folder = os.path.join(os.getenv('APPDATA'), 'Microsoft', 'Windows', 'Start Menu', 'Programs', 'Startup')
    autostart_path = os.path.join(autostart_folder, os.path.basename(sys.argv[0]))

    try:
        # Copy the script to the autostart location
        shutil.copy(script_path, autostart_path)

        print(f"Script and sound files copied to {autostart_path}")
    except Exception as e:
        print(f"Error copying files to autostart: {e}")

def create_task():
    executable_path = os.path.abspath(sys.argv[0])
    task_name = "YourTaskName"  # Replace with your desired task name
    task_command = f'"{executable_path}"'  # Include quotes to handle paths with spaces

    try:
        scheduler = win32com.client.Dispatch('Schedule.Service')
        scheduler.Connect()

        rootFolder = scheduler.GetFolder('\\')

        # Create a new task
        taskDef = scheduler.NewTask(0)
        taskDef.RegistrationInfo.Description = "Your Task Description"
        taskDef.Principal.UserId = "NT AUTHORITY\SYSTEM"
        taskDef.Principal.LogonType = 3  # Logon interactively

        # Create a trigger that starts the task at logon
        trigger = taskDef.Triggers.Create(1)  # 1 means "At logon"
        trigger.Id = "LogonTriggerId"
        trigger.UserId = "NT AUTHORITY\SYSTEM"

        # Create an action that launches the executable
        execAction = taskDef.Actions.Create(0)  # 0 means "Exec"
        execAction.Path = task_command

        # Save the task
        rootFolder.RegisterTaskDefinition(
            task_name,
            taskDef,
            6,  # Logon interactively
            None,  # User and password are None for the SYSTEM account
            None,
            3,  # Logon interactively
        )

        show_windows_message(f"Task '{task_name}' created successfully in Task Scheduler.")
    except Exception as e:
        show_windows_message(f"Error creating task in Task Scheduler: {e}")


def show_windows_message(message, title="Message"):
    ctypes.windll.user32.MessageBoxW(0, message, title, 1)  # 1 means OK button


def play_press_sound():
    pygame.mixer.music.load(sound_press)
    pygame.mixer.music.play()

def play_release_sound():
    pygame.mixer.music.load(sound_release)
    pygame.mixer.music.play()

def on_key_event(event):
    if event.event_type == keyboard.KEY_DOWN:
        play_press_sound()

    if event.event_type == keyboard.KEY_UP:
        play_release_sound()   

def main(): 
    create_task()  # Create a task in Task Scheduler when the executable is run
    pygame.mixer.init()
    keyboard.hook(on_key_event) 
    while True:
        time.sleep(1)


if __name__ == "__main__":
    main()