//
// Created by octo on 16/02/2021.
//

#include "Window.h"
#include "../errors/ErrorStatus.h"
#include "../renderer/VulkanRenderer.h"

#include <stdio.h>
#include <stdexcept>


namespace Empire {


    Window::Window()
    : vulkanRenderer(nullptr)
    {}

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
            throw std::runtime_error("\"Failed to open GLFW Window.");
            glfwTerminate();
        }

        vulkanRenderer = new VulkanRenderer(glfWindow);
        vulkanRenderer->initVulkanRenderer();

        glfwMakeContextCurrent(glfWindow); // Initialize GLEW
    }

    void Window::cleanup()
    {
        vulkanRenderer->cleanup();
        delete vulkanRenderer;

        glfwDestroyWindow(glfWindow);

        glfwTerminate();
    }
}