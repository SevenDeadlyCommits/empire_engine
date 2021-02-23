//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_MOUSEMOVEDEVENT_H
#define EMPIRE_MOUSEMOVEDEVENT_H

#include <event/Event.h>

namespace Empire {
    class MouseMovedEvent : public Event {
    public:
        MouseMovedEvent(const float x, const float y)
        : xPos(x)
        , yPos(y){}

        const float getX() const {return xPos; }
        const float getY() const {return yPos; }

        EVENT_CLASS_TYPE(MouseMoved)
        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
    private:
        float xPos;
        float yPos;
    };
}
#endif //EMPIRE_MOUSEMOVEDEVENT_H
