MicroMacro – Mouse Input Automation Tool

Created by NullSec8

Demo
<p align="center"> <video width="480" controls> <source src="https://github.com/user-attachments/assets/c9ea2f80-8030-4145-aecf-36157380b6ae" type="video/mp4"> Your browser does not support the video tag. </video> </p>

Direct link:
https://github.com/user-attachments/assets/c9ea2f80-8030-4145-aecf-36157380b6ae

Overview

MicroMacro is a lightweight Windows utility written in C++ that demonstrates automated mouse movement using the WinAPI.

It was developed for experimenting with recoil-like camera behavior in offline environments, training ranges, and sandbox testing scenarios.

The tool applies smooth, adjustable downward mouse movement while the Left Mouse Button is held. It is useful for studying input handling, testing weapon behavior, and prototyping camera control systems.

Features
F4 — Toggle automation on/off
F6 — Increase movement intensity
F5 — Decrease movement intensity
Smooth, timer-based relative mouse movement
Real-time adjustable strength
Clean, minimal C++ codebase
Custom icon support
Purpose

MicroMacro is intended for learning, experimentation, and offline testing, including:

WinAPI input automation techniques
Camera and recoil behavior prototyping
Game development experimentation
Stability and aiming behavior testing in non-competitive environments

This tool is not designed for competitive or online multiplayer gameplay.

Technical Highlights
Uses SendInput() for mouse movement
Polls input with GetAsyncKeyState()
Lightweight main loop with timing control
Icon embedding via resource files
Disclaimer

MicroMacro is provided for educational and offline testing purposes only.

It was not designed for use in online or competitive games. The author makes no guarantees regarding safety, ban risk, or compatibility with any game’s anti-cheat systems.

If used in violation of a game's terms of service, it is entirely at the user's own risk. The author assumes no responsibility for bans, account restrictions, or any resulting consequences.
