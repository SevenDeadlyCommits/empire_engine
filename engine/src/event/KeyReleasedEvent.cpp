//
// Created by octo on 23/02/2021.
//

#include "KeyReleasedEvent.h"

#include <sstream>

namespace Empire {

    /**
     *
     * @param keyCode
     */
    KeyReleasedEvent::KeyReleasedEvent(const int keyCode)
    : KeyEvent(keyCode) {

    }

    /**
     *
     * @return description
     */
    const std::string KeyReleasedEvent::toString() const {
        std::stringstream stream;
        stream << "KeyReleasedEvent: " << keyCode;
        return stream.str();
    }
}