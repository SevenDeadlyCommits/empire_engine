//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_KEYRELEASEDEVENT_H
#define EMPIRE_KEYRELEASEDEVENT_H

#include <event/KeyEvent.h>

namespace Empire {

    class KeyReleasedEvent : public KeyEvent {

    public:
        KeyReleasedEvent(const int keyCode);

        const std::string toString() const;

        EVENT_CLASS_TYPE(KeyReleased)

    };
}


#endif //EMPIRE_KEYRELEASEDEVENT_H
