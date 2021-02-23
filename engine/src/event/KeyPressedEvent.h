//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_KEYPRESSEDEVENT_H
#define EMPIRE_KEYPRESSEDEVENT_H

#include <event/KeyEvent.h>

namespace Empire {

    class KeyPressedEvent : public KeyEvent {
    public:
        KeyPressedEvent(const int keyCode, const int repeatCount);

        const std::string toString() const;

        inline const int getRepeatCount() const {return repeatCount;}

        EVENT_CLASS_TYPE(KeyPressed)
    private:
        int repeatCount;

    };
}


#endif //EMPIRE_KEYPRESSEDEVENT_H
