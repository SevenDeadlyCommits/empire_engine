//
// Created by octo on 22/02/2021.
//

#include "Application.h"
#include <Empire.h>
#include <window/Window.h>

namespace Empire {

    Application::Application() {

    }

    void Application::init() {
        // Create application window
        window = std::make_unique<Window>();
        getWindow()->setEventCallback(EMPIRE_BIND_EVENT_FN(Application::OnEvent));
        getWindow()->initWindow();
        // Create our vulkan renderer
        renderer = std::make_unique<VulkanRenderer>(getWindow()->getGlfWindowHandle());
        getRenderer()->initVulkanRenderer();
    }

    void Application::run() {
        // Simple main application loop
        while(!glfwWindowShouldClose(getWindow()->getGlfWindowHandle())) {
            glfwPollEvents();
            getRenderer()->drawFrame();
        }

    }

    void Application::OnEvent(Event& event) {

    }

    void Application::cleanup() {
        getRenderer()->cleanup();
        getWindow()->cleanup();
    }

}