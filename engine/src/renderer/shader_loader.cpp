//
// Created by octo on 20/02/2021.
//

#include "shader_loader.h"

#include <fstream>
#include <iostream>
#include <filesystem>

namespace empire {
    std::vector<char> shader_loader::readFile(const std::string& filename) {
        std::ifstream file(filename, std::ios::ate | std::ios::binary);

        if (!file.is_open()) {
            throw std::runtime_error("failed to open file!");
        }

        size_t fileSize = (size_t) file.tellg();
        std::vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(), fileSize);

        file.close();

        return buffer;
    }
}