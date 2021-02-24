//
// Created by octo on 22/02/2021.
//

#include "Application.h"
#include <Empire.h>
#include <window/Window.h>
#include <event/EventDispatcher.h>
#include <event/WindowResizeEvent.h>

namespace Empire {

    Application::Application()
    : minimized(false) {

    }

    void Application::init() {
        // Create application window
        window = std::make_unique<Window>();
        getWindow()->setEventCallback(EMPIRE_BIND_EVENT_FN(Application::onEvent));
        getWindow()->initWindow();
        // Create our vulkan renderer
        renderer = std::make_unique<VulkanRenderer>(getWindow()->getGlfWindowHandle());
        getRenderer()->initVulkanRenderer();
    }

    void Application::run() {
        // Simple main application loop
        while(!glfwWindowShouldClose(getWindow()->getGlfWindowHandle())) {
            glfwPollEvents();
            if (!minimized) {
                getRenderer()->drawFrame();
            }
        }

    }

    void Application::onEvent(Event& event) {
        EventDispatcher dispatcher(event);
        dispatcher.dispatch<WindowResizeEvent>(EMPIRE_BIND_EVENT_FN(Application::onWindowResized));
    }

    bool Application::onWindowResized(class WindowResizeEvent& event) {
        minimized = event.getWidth() == 0 || event.getHeight() == 0;
        return false;
    }

    void Application::cleanup() {
        getRenderer()->cleanup();
        getWindow()->cleanup();
    }

}