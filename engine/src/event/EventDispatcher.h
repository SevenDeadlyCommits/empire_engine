//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_EVENTDISPATCHER_H
#define EMPIRE_EVENTDISPATCHER_H

#include <event/Event.h>

namespace Empire {

    class EventDispatcher {
    public:
        EventDispatcher(Event &event)
                : event(event) {}

        template<typename T, typename F>
        bool dispatch(const F& callback) {
            if(event.getEventType() == T::getStaticType()) {
                event.handled |= callback(static_cast<T&>(event));
                return true;
            }
            return false;
        }

    private:
        Event& event;
    };
}


#endif //EMPIRE_EVENTDISPATCHER_H
