//
// Created by octo on 23/02/2021.
//

#include "Logger.h"

#include <stdio.h>

namespace empire {

    /**
     * Super simple logging to console for now.
     *
     * @param level
     * @param type
     * @param message
     */
    void Logger::LogMessage(const LogLevel level, const LogType type, const char* message) {
        printf("%s\n", message);
    }
}