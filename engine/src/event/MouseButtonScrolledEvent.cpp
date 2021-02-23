//
// Created by octo on 23/02/2021.
//

#include "MouseButtonScrolledEvent.h"

#include <sstream>

namespace Empire {

    /**
     *
     * @param x
     * @param y
     */
    MouseButtonScrolledEvent::MouseButtonScrolledEvent(const float x, const float y)
    : x(x)
    , y(y){

    }

    /**
     *
     * @return description
     */
    const std::string MouseButtonScrolledEvent::toString() {
        std::stringstream stream;
        stream << "MouseScrolledEvent: (" << x << "," << y << ")";
        return stream.str();
    }
}