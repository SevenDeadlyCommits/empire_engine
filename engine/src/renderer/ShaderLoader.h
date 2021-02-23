//
// Created by octo on 20/02/2021.
//

#ifndef EMPIRE_SHADERLOADER_H
#define EMPIRE_SHADERLOADER_H

#include <string>
#include <vector>

namespace Empire {
    class ShaderLoader {

    public:
        static std::vector<char> readFile(const std::string& filename);

    };
}


#endif //EMPIRE_SHADERLOADER_H
