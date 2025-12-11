<img width="500" height="500" alt="Image" src="https://github.com/user-attachments/assets/34c12bc3-2f37-44db-831f-cb20519e85a1" />

MicroMacro – Mouse Input Automation Tool

Created by NullSec8

MicroMacro is a lightweight Windows utility written in C++ that demonstrates automated mouse movement using the WinAPI.
Developed by NullSec8, the tool was built for experimenting with recoil-like camera behavior in offline environments, training ranges, and sandbox testing in games such as Battlefield 6.

The program provides smooth, adjustable downward mouse movement while the Left Mouse Button is held, making it useful for studying input handling, testing weapon behavior, or prototyping camera-control mechanics.

Features

F4 – Toggle automation on/off

F6 – Increase movement intensity

F5 – Decrease movement intensity

Smooth, timer-based relative mouse movement

Adjustable strength in real time

Clean, minimal C++ code

Custom icon support

Purpose

MicroMacro is intended for learning, experimentation, and offline testing, including:

WinAPI input automation techniques

Camera and recoil behavior prototyping

Game development experimentation

Stability/aiming behavior tests in non-competitive environments

It is not designed for competitive or online multiplayer gameplay.

Technical Highlights

Uses SendInput() for mouse movement

Polls input with GetAsyncKeyState()

Lightweight main loop with timing control

Icon embedding via resource files

⚠️ Disclaimer

MicroMacro is provided for educational and offline testing purposes only.
It was not designed for use in online or competitive games.

The author (NullSec8) makes no guarantees regarding safety, ban risk, or compatibility with any game’s anti-cheat systems.
If you choose to use this software in ways that violate a game’s terms of service, you do so entirely at your own risk.
The author assumes no responsibility for any bans, account restrictions, or other consequences.
