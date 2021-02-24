//
// Created by octo on 24/02/2021.
//

#ifndef EMPIRE_WINDOWDATA_H
#define EMPIRE_WINDOWDATA_H

#include <string>
#include <event/Event.h>

namespace Empire {
    using EventCallback = std::function<void(Event&)>;
    struct WindowData {
        unsigned int width;
        unsigned int height;
        std::string windowTitle;
        EventCallback eventCallback;
    };
}

#endif //EMPIRE_WINDOWDATA_H
