//
// Created by octo on 16/02/2021.
//

#include "Window.h"

#include <stdexcept>

namespace Empire {


    Window::Window() {

    }

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

        glfwMakeContextCurrent(glfWindow); // Initialize GLEW
    }

    void Window::cleanup()
    {
        glfwDestroyWindow(glfWindow);
        glfwTerminate();
    }
}