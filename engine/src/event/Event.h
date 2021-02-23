//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_EVENT_H
#define EMPIRE_EVENT_H

#include <Empire.h>
#include <string>

namespace Empire {

    enum class EventType {
        None = 0,
        WindowResized, WindowClosed,
        KeyPressed, KeyReleased,
        MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
    };

    enum EventCategory {
        None = 0,
        EventCategoryApplication = Bit(0),
        EventCategoryInput       = Bit(1),
        EventCategoryKeyboard    = Bit(2),
        EventCategoryMouse       = Bit(3),
        EventCategoryMouseButton = Bit(4)
    };

#define EVENT_CLASS_TYPE(type) static EventType getStaticType() { return EventType::type; } \
                                virtual EventType getEventType() const override { return getStaticType(); }\
                                virtual const char* getName() const override { return #type; }

#define EVENT_CLASS_CATEGORY(category) virtual int getCategoryFlags() const override {return category;}

    class Event {
    public:
        virtual EventType getEventType() const = 0;
        virtual int getCategoryFlags() const = 0;
        virtual const char* getName() const = 0;
        virtual const std::string toString() {return getName(); };

        inline bool inCategory(EventCategory category) { return getCategoryFlags() & category;}

    protected:
        bool handled = false;
    };
}


#endif //EMPIRE_EVENT_H
