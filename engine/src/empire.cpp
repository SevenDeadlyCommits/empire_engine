//
// Created by octo on 16/02/2021.
//

#include "empire.h"
#include "errors/error_status.h"
#include <GLFW/glfw3.h>


namespace empire
{
    empire_engine::empire_engine()
    : mainWindow(nullptr)
    {
    }

    ERROR_STATUS empire_engine::initialise()
    {
        ERROR_STATUS status = ERROR_STATUS::NONE;
        status = mainWindow == nullptr ? ERROR_STATUS::NONE : ERROR_STATUS::GENERIC_ERROR;
        if (status != ERROR_STATUS::NONE)
            return status;

        mainWindow = new window();
        status = mainWindow->initWindow();

        if (status != ERROR_STATUS::NONE)
            return status;

        // More init here

        return status;
    }

    ERROR_STATUS empire_engine::launch()
    {
        while(!glfwWindowShouldClose(mainWindow->getGlfWindowHandle())) {
            glfwPollEvents();
            mainWindow->getVulkanRenderer()->drawFrame();
        }

        return ERROR_STATUS::NONE;
    }

    ERROR_STATUS empire_engine::shutdown()
    {
        mainWindow->cleanup();
        delete mainWindow;
        return ERROR_STATUS::NONE;
    }
}