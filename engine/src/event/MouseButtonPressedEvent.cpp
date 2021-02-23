//
// Created by octo on 23/02/2021.
//

#include "MouseButtonPressedEvent.h"

#include <sstream>

namespace Empire {

    /**
     *
     * @param mouseButtonCode
     */
    MouseButtonPressedEvent::MouseButtonPressedEvent(const int mouseButtonCode)
            : MouseButtonEvent(mouseButtonCode){

    }

    /**
     *
     * @return description
     */
    const std::string MouseButtonPressedEvent::toString() {
        std::stringstream stream;
        stream << "MouseButtonPressedEvent: " << mouseButtonCode;
        return stream.str();
    }
}