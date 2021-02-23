//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_MOUSEBUTTONEVENT_H
#define EMPIRE_MOUSEBUTTONEVENT_H

#include <event/Event.h>

namespace Empire {
    class MouseButtonEvent : public Event {
    public:
        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput | EventCategoryMouseButton)

    protected:
        MouseButtonEvent(const int mouseButtonCode)
        : mouseButtonCode(mouseButtonCode){}

    protected:
        int mouseButtonCode;
    };
}
#endif //EMPIRE_MOUSEBUTTONEVENT_H
