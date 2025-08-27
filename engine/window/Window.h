#pragma once
#include <string>
#include <SDL.h>

class Window {
public:
    Window(const std::string& title, int width, int height);
    ~Window();
    SDL_Window* getSDLWindow() const;
private:
    SDL_Window* window;
};