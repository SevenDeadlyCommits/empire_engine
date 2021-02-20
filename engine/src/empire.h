//
// Created by octo on 16/02/2021.
//

#ifndef EMPIRE_EMPIRE_H
#define EMPIRE_EMPIRE_H

#include "window/window.h"

namespace empire {
    enum class ERROR_STATUS;
    class window;

    class empire_engine {
    public:
    empire_engine();

    ERROR_STATUS initialise();
    ERROR_STATUS launch();
    ERROR_STATUS shutdown();

    private:
        window* mainWindow;
    };
}


#endif //EMPIRE_EMPIRE_H
