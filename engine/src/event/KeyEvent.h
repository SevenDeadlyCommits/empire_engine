//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_KEYEVENT_H
#define EMPIRE_KEYEVENT_H

#include <event/Event.h>

namespace Empire {
    class KeyEvent : public Event {
    public:
        inline const int getKeyCode() const {return keyCode;}

        EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)
    protected:
        KeyEvent(const int keyCode) :keyCode(keyCode){}

    protected:
        int keyCode;
    };
}


#endif //EMPIRE_KEYEVENT_H
