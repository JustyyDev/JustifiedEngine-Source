#include "Renderer.h"
#include <SDL.h>
#include <SDL_opengl.h>

Renderer::Renderer(Window* win)
    : window(win) {
    // Create OpenGL context for the window
    if (window && window->getSDLWindow()) {
        SDL_GL_CreateContext(window->getSDLWindow());
    }
}

Renderer::~Renderer() {
    // TODO: Cleanup graphics context if needed
}

void Renderer::render() {
    // Clear screen with a dark color (example)
    glClearColor(0.15f, 0.15f, 0.18f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    if (window && window->getSDLWindow())
        SDL_GL_SwapWindow(window->getSDLWindow());
}