//
// Created by octo on 20/02/2021.
//

#ifndef EMPIRE_SHADER_LOADER_H
#define EMPIRE_SHADER_LOADER_H

#include <string>
#include <vector>

namespace empire {
    class shader_loader {

    public:
        static std::vector<char> readFile(const std::string& filename);

    };
}


#endif //EMPIRE_SHADER_LOADER_H
