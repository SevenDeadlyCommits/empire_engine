//
// Created by octo on 16/02/2021.
//

#include "Window.h"
#include "../errors/ErrorStatus.h"
#include "../renderer/VulkanRenderer.h"

#include <stdio.h>


namespace Empire {


    Window::Window()
    : vulkanRenderer(nullptr)
    {}

    ERROR_STATUS Window::initWindow() {
        // Initialise GLFW
        if (!glfwInit()) {
            fprintf(stderr, "Failed to initialize GLFW\n");
            return ERROR_STATUS::GENERIC_ERROR;
        }
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

        // Open a Window and create its OpenGL context
        glfWindow = glfwCreateWindow(1024, 768, "Window", nullptr, nullptr);
        if (glfWindow == nullptr) {
            fprintf(stderr,
                    "Failed to open GLFW Window.\n");
            glfwTerminate();
            return ERROR_STATUS::GENERIC_ERROR;
        }

        vulkanRenderer = new VulkanRenderer(glfWindow);
        vulkanRenderer->initVulkanRenderer();

        glfwMakeContextCurrent(glfWindow); // Initialize GLEW

        return ERROR_STATUS::NONE;
    }

    void Window::cleanup()
    {
        vulkanRenderer->cleanup();
        delete vulkanRenderer;

        glfwDestroyWindow(glfWindow);

        glfwTerminate();
    }
}