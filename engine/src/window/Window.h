//
// Created by octo on 16/02/2021.
//

#ifndef EMPIRE_WINDOW_H
#define EMPIRE_WINDOW_H

#define GLFW_INCLUDE_VULKAN
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <GLFW/glfw3.h>
#include <vector>
#include "../renderer/VulkanRenderer.h"

namespace Empire {
    class Window {
    public:
        Window();
        void initWindow();

        void cleanup();

        inline GLFWwindow* getGlfWindowHandle() {return glfWindow;}
        inline VulkanRenderer* getVulkanRenderer() {return vulkanRenderer;}

    private:
        GLFWwindow* glfWindow;
        VulkanRenderer* vulkanRenderer;

    };
}

#endif //EMPIRE_WINDOW_H
