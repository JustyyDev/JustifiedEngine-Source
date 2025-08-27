#include "Window.h"

Window::Window(const std::string& title, int width, int height) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        window = nullptr;
        return;
    }
    window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              width, height, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
}

Window::~Window() {
    if (window) SDL_DestroyWindow(window);
    SDL_Quit();
}

SDL_Window* Window::getSDLWindow() const {
    return window;
}