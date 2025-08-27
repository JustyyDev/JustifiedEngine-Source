#pragma once

class Input {
public:
    void pollEvents();
    bool shouldQuit() const;
private:
    bool quit = false;
};