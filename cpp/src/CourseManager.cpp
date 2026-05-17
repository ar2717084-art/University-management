#include "../include/CourseManager.h"

std::vector<Course> courses;

bool CourseManager::addCourse(const Course& c) {
    courses.push_back(c);
    return true;
}

std::vector<Course> CourseManager::getAll() {
    return courses;
}
