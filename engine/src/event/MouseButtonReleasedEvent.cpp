//
// Created by octo on 23/02/2021.
//

#include "MouseButtonReleasedEvent.h"
#include <sstream>

namespace Empire {

    /**
     *
     * @param mouseButtonCode
     */
    MouseButtonReleasedEvent::MouseButtonReleasedEvent(const int mouseButtonCode)
    : MouseButtonEvent(mouseButtonCode){

    }

    /**
     *
     * @return description
     */
    const std::string MouseButtonReleasedEvent::toString() {
        std::stringstream stream;
        stream << "MouseButtonReleasedEvent: " << mouseButtonCode;
        return stream.str();
    }
}