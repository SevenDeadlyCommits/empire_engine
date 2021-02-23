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
#include <functional>

#include <event/Event.h>

namespace Empire {
    class Window {
    public:

        using EventCallback = std::function<void(Event&)>;
        Window();

        void initWindow();
        void setEventCallback(const EventCallback& eventCallback);
        void cleanup();

        inline GLFWwindow* getGlfWindowHandle() {return glfWindow;}

    private:
        GLFWwindow* glfWindow;
        EventCallback eventCallback;

    };
}

#endif //EMPIRE_WINDOW_H
