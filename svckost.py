import keyboard
# import mouse
from pynput import mouse
import pygame
import os
import sys
import time

from ctypes import cast, POINTER
from comtypes import CLSCTX_ALL
from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume

try:
    sound_press = os.path.join(sys._MEIPASS, "press.wav")
    sound_release = os.path.join(sys._MEIPASS, "release.wav")
    sound_shoot = os.path.join(sys._MEIPASS, "shoot.mp3")
    sound_reload = os.path.join(sys._MEIPASS, "reload.mp3")
except: 
    sound_press = os.path.join("press.wav")
    sound_release = os.path.join("release.wav")
    sound_shoot = os.path.join("shoot.mp3")
    sound_reload = os.path.join("reload.mp3")

    
# Get the default audio endpoint
devices = AudioUtilities.GetSpeakers()
interface = devices.Activate(
    IAudioEndpointVolume._iid_, CLSCTX_ALL, None)

# Create a volume control object
volume = cast(interface, POINTER(IAudioEndpointVolume))

# Start volume at 50% (adjust as needed)
initial_volume = volume.GetMasterVolumeLevelScalar()

# a = os.path.join(sys._MEIPASS, "a.mp3")
# b = os.path.join(sys._MEIPASS, "b.mp3")
# c = os.path.join(sys._MEIPASS, "c.mp3")
# d = os.path.join(sys._MEIPASS, "d.mp3")
# e = os.path.join(sys._MEIPASS, "e.mp3")
# f = os.path.join(sys._MEIPASS, "f.mp3")
# g = os.path.join(sys._MEIPASS, "g.mp3")
# h = os.path.join(sys._MEIPASS, "h.mp3")
# i = os.path.join(sys._MEIPASS, "i.mp3")
# j = os.path.join(sys._MEIPASS, "j.mp3")
# k = os.path.join(sys._MEIPASS, "k.mp3")
# l = os.path.join(sys._MEIPASS, "l.mp3")
# m = os.path.join(sys._MEIPASS, "m.mp3")
# n = os.path.join(sys._MEIPASS, "n.mp3")
# o = os.path.join(sys._MEIPASS, "o.mp3")
# p = os.path.join(sys._MEIPASS, "p.mp3")
# q = os.path.join(sys._MEIPASS, "q.mp3")
# r = os.path.join(sys._MEIPASS, "r.mp3")
# s = os.path.join(sys._MEIPASS, "s.mp3")
# t = os.path.join(sys._MEIPASS, "t.mp3")
# u = os.path.join(sys._MEIPASS, "u.mp3")
# v = os.path.join(sys._MEIPASS, "v.mp3")
# w = os.path.join(sys._MEIPASS, "w.mp3")
# x = os.path.join(sys._MEIPASS, "x.mp3")
# y = os.path.join(sys._MEIPASS, "y.mp3")
# z = os.path.join(sys._MEIPASS, "z.mp3")

pressed_keys = []

def play_press_sound():
    pygame.mixer.music.load(sound_press)
    pygame.mixer.music.play()

def play_release_sound():
    pygame.mixer.music.load(sound_release)
    pygame.mixer.music.play()

def play_shoot_sound():
    # pygame.mixer.music.stop()
    pygame.mixer.music.load(sound_shoot)
    pygame.mixer.music.play()

def play_reload_sound():
    # pygame.mixer.music.stop()
    pygame.mixer.music.load(sound_reload)
    pygame.mixer.music.play()

def increase_volume():
    volume.SetMute(0, None)  # 0 for unmute
    current_volume = volume.GetMasterVolumeLevelScalar()
    new_volume = min(1.0, current_volume + 0.005)  # Increase by 10% (adjust as needed)
    volume.SetMasterVolumeLevelScalar(new_volume, None)

def on_key_event(event):
    key = event.name.lower()
    if event.event_type == keyboard.KEY_DOWN and key not in pressed_keys:
        increase_volume()
        pressed_keys.append(key)
        play_press_sound()
    

    if event.event_type == keyboard.KEY_UP:
        pressed_keys.remove(key)
        play_release_sound()   

        
def on_mouse_click(x, y, button, pressed):
    
    if pressed:
        # increase_volume()

        if button == mouse.Button.left:
            # Stop the sound if it's already playing
            play_shoot_sound()
        if button == mouse.Button.right:
            # Stop the sound if it's already playing
            play_reload_sound()

def main(): 
    pygame.mixer.init()
    keyboard.hook(on_key_event) 
    # Hook mouse events
    # mouse.hook(on_mouse_click)
    with mouse.Listener(on_click=on_mouse_click) as listener:
        listener.join()
    while True:
        time.sleep(1)


if __name__ == "__main__":
    main()
