//
// Created by octo on 24/02/2021.
//

#ifndef EMPIRE_WINDOWRESIZEEVENT_H
#define EMPIRE_WINDOWRESIZEEVENT_H

#include <event/Event.h>

namespace Empire {
    class WindowResizeEvent : public Event {
    public:
        WindowResizeEvent(const unsigned int width, const unsigned int height)
        : width(width)
        , height(height){}

        inline const unsigned int getWidth() {return width; }
        inline const unsigned int getHeight() {return height; }

        const std::string toString() override;

        EVENT_CLASS_TYPE(WindowResized)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    private:
        unsigned int width;
        unsigned int height;

    };
}


#endif //EMPIRE_WINDOWRESIZEEVENT_H
