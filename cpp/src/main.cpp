#include "../include/StudentManager.h"
#include "../include/AuthManager.h"
#include <iostream>

int main() {
    AuthManager auth;

    if (auth.login("admin@uni.com", "1234")) {
        std::cout << "Login successful\n";

        StudentManager sm;
        sm.addStudent({1, "Ali", "CS", 3.5});

        std::cout << "System running...\n";
    } else {
        std::cout << "Login failed\n";
    }

    return 0;
}
