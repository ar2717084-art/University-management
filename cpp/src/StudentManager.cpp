#include "../include/StudentManager.h"
#include <vector>

std::vector<Student> db;

bool StudentManager::addStudent(const Student& s) {
    db.push_back(s);
    return true;
}

std::vector<Student> StudentManager::getAll() {
    return db;
}

Student StudentManager::getById(int id) {
    for (auto& s : db)
        if (s.id == id) return s;

    return {-1, "Not Found", "", 0};
}

bool StudentManager::removeStudent(int id) {
    for (auto it = db.begin(); it != db.end(); ++it) {
        if (it->id == id) {
            db.erase(it);
            return true;
        }
    }
    return false;
}
