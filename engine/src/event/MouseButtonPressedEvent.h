//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_MOUSEBUTTONPRESSEDEVENT_H
#define EMPIRE_MOUSEBUTTONPRESSEDEVENT_H

#include <event/MouseButtonEvent.h>

namespace Empire {
    class MouseButtonPressedEvent : public MouseButtonEvent {
    public:
        MouseButtonPressedEvent(const int mouseButtonCode);

        const std::string toString() override;

        EVENT_CLASS_TYPE(MouseButtonPressed)
    };
}


#endif //EMPIRE_MOUSEBUTTONPRESSEDEVENT_H
