//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_MOUSEBUTTONRELEASEDEVENT_H
#define EMPIRE_MOUSEBUTTONRELEASEDEVENT_H

#include <event/MouseButtonEvent.h>

namespace Empire {
    class MouseButtonReleasedEvent : public MouseButtonEvent {
    public:
        MouseButtonReleasedEvent(const int mouseButtonCode);

        const std::string toString() override;

        EVENT_CLASS_TYPE(MouseButtonReleased)
    };
}


#endif //EMPIRE_MOUSEBUTTONRELEASEDEVENT_H
