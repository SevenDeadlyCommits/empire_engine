//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_MOUSEBUTTONSCROLLEDEVENT_H
#define EMPIRE_MOUSEBUTTONSCROLLEDEVENT_H

#include <event/Event.h>

namespace Empire {
    class MouseButtonScrolledEvent : public Event {
    public:
        MouseButtonScrolledEvent(const float x, const float y);

        const float getX() { return x;}
        const float gety() { return y;}

        const std::string toString() override;

        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
        EVENT_CLASS_TYPE(MouseScrolled)

    private:
        float x;
        float y;

    };
}


#endif //EMPIRE_MOUSEBUTTONSCROLLEDEVENT_H
