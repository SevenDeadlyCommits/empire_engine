//
// Created by octo on 22/02/2021.
//

#include "Application.h"
#include <window/Window.h>

namespace Empire {

    Application::Application() {

    }

    void Application::init() {
        window = std::make_unique<Window>();
        getWindow()->initWindow();
    }

    void Application::run() {
        // Simple main application loop
        while(!glfwWindowShouldClose(getWindow()->getGlfWindowHandle())) {
            glfwPollEvents();
            getWindow()->getVulkanRenderer()->drawFrame();
        }

    }

    void Application::cleanup() {
        getWindow()->cleanup();
    }

}