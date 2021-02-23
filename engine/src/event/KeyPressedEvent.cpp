//
// Created by octo on 23/02/2021.
//

#include "KeyPressedEvent.h"

#include <sstream>

namespace Empire {

    /**
     *
     * @param keyCode
     * @param repeatCount
     */
    KeyPressedEvent::KeyPressedEvent(const int keyCode, const int repeatCount)
    : KeyEvent(keyCode)
    , repeatCount(repeatCount) {

    }

    /**
     *
     * @return description
     */
    const std::string KeyPressedEvent::toString() const {
        std::stringstream stream;
        stream << "KeyPressedEvent: " << keyCode << "( " << repeatCount << " repeats)";
        return stream.str();
    }
}