//
// Created by octo on 16/02/2021.
//

#ifndef EMPIRE_EMPIRE_H
#define EMPIRE_EMPIRE_H

// Common engine includes, possibly some macro defs here
#define Bit(x) (1 << x)


#define EMPIRE_BIND_EVENT_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }

#endif //EMPIRE_EMPIRE_H
