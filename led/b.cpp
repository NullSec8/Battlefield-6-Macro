#include <Windows.h>
#include <iostream>
#include <algorithm> // for std::max

// --- Recoil parameters ---
bool recoilMacro = false;
int recoilStrength = 6;      // pixels downward
int recoilDelayMs = 10;      // delay for gradual movement
const int recoilStep = 1;    // how much it changes with F5/F6

// --- Mouse movement function ---
void moveRelative(int dx, int dy) {
    INPUT inp = {0};
    inp.type = INPUT_MOUSE;
    inp.mi.dx = dx;
    inp.mi.dy = dy;
    inp.mi.dwFlags = MOUSEEVENTF_MOVE;
    SendInput(1, &inp, sizeof(INPUT));
}

// --- Hotkey control function ---
void checkHotkeys() {
    // Toggle recoil macro
    if (GetAsyncKeyState(VK_F4) & 0x1) {
        recoilMacro = !recoilMacro;
        std::cout << "Recoil macro: " << (recoilMacro ? "Active" : "Disabled") << std::endl;
    }

    // Increase recoil strength
    if (GetAsyncKeyState(VK_F6) & 0x1) {
        recoilStrength += recoilStep;
        std::cout << "Recoil strength: " << recoilStrength << std::endl;
    }

    // Decrease recoil strength
    if (GetAsyncKeyState(VK_F5) & 0x1) {
        recoilStrength = std::max(1, recoilStrength - recoilStep); // prevent it from going to 0 or negative
        std::cout << "Recoil strength: " << recoilStrength << std::endl;
    }
}

int main() {
    std::cout << "F4 = Toggle Recoil Macro, F5 = Decrease strength, F6 = Increase strength" << std::endl;
    std::cout << "Hold LMB to apply recoil effect" << std::endl;

    while (true) {
        checkHotkeys();

        // Recoil macro: move down when holding LMB
        if (recoilMacro && (GetAsyncKeyState(VK_LBUTTON) & 0x8000)) {
            moveRelative(0, recoilStrength);
            Sleep(recoilDelayMs);
        }

        Sleep(1); // minimal CPU delay
    }

    return 0;
}
