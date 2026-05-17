#include "../include/AuthManager.h"

bool AuthManager::login(const std::string& email, const std::string& password) {
    return (email == "admin@uni.com" && password == "1234");
}
