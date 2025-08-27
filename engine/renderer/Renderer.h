#pragma once
#include "../window/Window.h"

class Renderer {
public:
    Renderer(Window* window);
    ~Renderer();
    void render();
private:
    Window* window;
    // Add graphics context members as needed (OpenGL, bgfx, etc.)
};