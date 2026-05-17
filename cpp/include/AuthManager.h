#pragma once
#include <string>

class AuthManager {
public:
    bool login(const std::string& email, const std::string& password);
};
