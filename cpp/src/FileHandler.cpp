#include "../include/FileHandler.h"
#include <fstream>

void FileHandler::write(const std::string& path, const std::string& data) {
    std::ofstream file(path);
    file << data;
    file.close();
}

std::string FileHandler::read(const std::string& path) {
    std::ifstream file(path);
    std::string content((std::istreambuf_iterator<char>(file)),
                         std::istreambuf_iterator<char>());
    return content;
}
