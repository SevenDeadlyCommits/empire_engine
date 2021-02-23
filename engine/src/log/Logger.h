//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_LOGGER_H
#define EMPIRE_LOGGER_H

#include <log/LogLevel.h>

namespace Empire {
    class Logger {
    public:
        static void LogMessage(const LogLevel level, const LogType type, const char* message);

    };
}

#endif //EMPIRE_LOGGER_H
