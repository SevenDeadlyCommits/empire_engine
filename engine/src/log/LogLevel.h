//
// Created by octo on 23/02/2021.
//

#ifndef EMPIRE_LOGLEVEL_H
#define EMPIRE_LOGLEVEL_H

namespace empire {

    enum class LogLevel {
        Quiet,
        Verbose
    };

    enum class LogType {
        Error,
        Warning,
        Info
    };
}

#endif //EMPIRE_LOGLEVEL_H
