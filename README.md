# MicroMacro – Mouse Input Automation Tool

https://github.com/user-attachments/assets/c9ea2f80-8030-4145-aecf-36157380b6ae

<video width="640" height="360" controls>
  <source src="https://github.com/user-attachments/assets/c9ea2f80-8030-4145-aecf-36157380b6ae" type="video/mp4">
  Your browser does not support the video tag.
</video>

---

## Overview

**MicroMacro** is a lightweight Windows utility written in C++ that demonstrates automated mouse movement using the WinAPI.

Developed by **NullSec8**, this project explores low-level input handling and smooth, timer-based cursor control for experimentation and prototyping purposes.

It is intended for **offline testing, learning, and simulation scenarios**, such as input behavior research and game development prototyping.

---

## Features

- **F4** – Toggle automation on/off  
- **F5** – Decrease movement intensity  
- **F6** – Increase movement intensity  
- Smooth, timer-based relative mouse movement  
- Adjustable strength in real time  
- Lightweight and minimal C++ implementation  
- Custom icon support via resource files  

---

## Purpose

MicroMacro is designed for educational and experimental use cases, including:

- WinAPI input automation techniques  
- Camera and recoil behavior prototyping  
- Game development experimentation  
- Input stability and movement behavior testing in sandbox environments  

> ⚠️ This tool is intended for offline and non-competitive experimentation only.

---

## Technical Details

- Uses `SendInput()` for simulated mouse movement  
- Polls keyboard state via `GetAsyncKeyState()`  
- Lightweight main loop with timing control  
- Smooth incremental movement adjustments  
- Windows-native C++ implementation (WinAPI)

---

## Disclaimer

This software is provided strictly for **educational and research purposes**.

It was not designed for use in online or competitive environments.

The author assumes no responsibility for:
- Account restrictions or bans  
- Violations of third-party terms of service  
- Any misuse of the software  

Use at your own risk and ensure compliance with applicable rules and regulations.

---
