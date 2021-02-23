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

namespace Empire {
    class Window {
    public:
        Window();

        void initWindow();
        void cleanup();

        inline GLFWwindow* getGlfWindowHandle() {return glfWindow;}

    private:
        GLFWwindow* glfWindow;

    };
}

#endif //EMPIRE_WINDOW_H
