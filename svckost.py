import keyboard
import pygame
import os
import sys
import time

sound_press = os.path.join(sys._MEIPASS, "press.wav")
sound_release = os.path.join(sys._MEIPASS, "release.wav")

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
    pygame.mixer.init()
    keyboard.hook(on_key_event) 
    while True:
        time.sleep(1)


if __name__ == "__main__":
    main()