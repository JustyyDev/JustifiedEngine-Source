#include "Input.h"
#include <SDL.h>

void Input::pollEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) quit = true;
        // TODO: Expand for keyboard, mouse, etc.
    }
}

bool Input::shouldQuit() const {
    return quit;
}