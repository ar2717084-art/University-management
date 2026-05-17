#pragma once
#include <string>

class FileHandler {
public:
    static void write(const std::string& path, const std::string& data);
    static std::string read(const std::string& path);
};
