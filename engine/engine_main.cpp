#include "window/Window.h"
#include "renderer/Renderer.h"
#include "input/Input.h"
#include "audio/Audio.h"
#include "physics/Physics.h"
#include "assets/AssetManager.h"
#include "scripting/Scripting.h"
#include <memory>
#include <iostream>

int main(int argc, char* argv[]) {
    // Initialize Window
    Window window("JustifiedEngine", 1280, 720);
    if (!window.getSDLWindow()) {
        std::cerr << "Failed to create SDL Window!" << std::endl;
        return 1;
    }

    // Initialize subsystems
    Renderer renderer(&window);
    Input input;
    Audio audio;
    Physics physics;
    AssetManager assets;
    Scripting scripting;

    // Main loop
    bool running = true;
    while (running) {
        input.pollEvents();
        if (input.shouldQuit()) running = false;

        physics.update();
        scripting.update();
        renderer.render();
        audio.update();
        // assets.update(); // For asset hot-reloading, if needed in future
    }

    return 0;
}