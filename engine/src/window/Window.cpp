//
// Created by octo on 16/02/2021.
//

#include "Window.h"

#include <stdexcept>
#include <event/WindowResizeEvent.h>

namespace Empire {


    /**
     *
     */
    Window::Window() {

    }

    /**
     *
     */
    void Window::initWindow() {
        // Initialise GLFW
        if (!glfwInit()) {
            throw std::runtime_error("Failed to initialize GLFW");
        }

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

        // Open a Window and create its OpenGL context
        glfWindow = glfwCreateWindow(1024, 768, "Window", nullptr, nullptr);
        if (glfWindow == nullptr) {
            glfwTerminate();
            throw std::runtime_error("\"Failed to open GLFW Window.");
        }

        // Set up data structure used in various callbacks
        glfwSetWindowUserPointer(glfWindow, &windowData);

        // Setup event callback for window resize
        glfwSetWindowSizeCallback(glfWindow, [](GLFWwindow* window, int width, int height) {
            // Not working yet//
//            WindowData data = *(WindowData*)glfwGetWindowUserPointer(window);
//            // Update copy of window data
//            data.width = width;
//            data.height = height;
//            // Create and propagate event
//            WindowResizeEvent event(width, height);
           // data.eventCallback(event);
        });

        glfwMakeContextCurrent(glfWindow); // Initialize GLEW
    }

    /**
     *
     * @param eventCallback
     */
    void Window::setEventCallback(const EventCallback &eventCallback) {
        windowData.eventCallback = eventCallback;
    }

    /**
     *
     */
    void Window::cleanup()
    {
        glfwDestroyWindow(glfWindow);
        glfwTerminate();
    }
}