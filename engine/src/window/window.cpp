//
// Created by octo on 16/02/2021.
//

#include "window.h"
#include "../errors/error_status.h"
#include "../renderer/vulkan_renderer.h"

#include <stdio.h>


namespace empire {


    window::window()
    : vulkanRenderer(nullptr)
    {}

    ERROR_STATUS window::initWindow() {
        // Initialise GLFW
        if (!glfwInit()) {
            fprintf(stderr, "Failed to initialize GLFW\n");
            return ERROR_STATUS::GENERIC_ERROR;
        }
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

        // Open a window and create its OpenGL context
        glfWindow = glfwCreateWindow(1024, 768, "Window", nullptr, nullptr);
        if (glfWindow == nullptr) {
            fprintf(stderr,
                    "Failed to open GLFW window.\n");
            glfwTerminate();
            return ERROR_STATUS::GENERIC_ERROR;
        }

        vulkanRenderer = new vulkan_renderer(glfWindow);
        vulkanRenderer->initVulkanRenderer();

        glfwMakeContextCurrent(glfWindow); // Initialize GLEW

        return ERROR_STATUS::NONE;
    }

    void window::cleanup()
    {
        vulkanRenderer->cleanup();
        delete vulkanRenderer;

        glfwDestroyWindow(glfWindow);

        glfwTerminate();
    }
}