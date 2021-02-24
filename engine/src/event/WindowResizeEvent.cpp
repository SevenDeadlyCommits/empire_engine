//
// Created by octo on 24/02/2021.
//

#include "WindowResizeEvent.h"

#include <sstream>

namespace Empire {

    const std::string WindowResizeEvent::toString() {
        std::stringstream stream;
        stream << "WindowResizedEvent: (" << width << "," << height << ")";
        return stream.str();
    }
}