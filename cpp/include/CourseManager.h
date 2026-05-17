#pragma once
#include <string>
#include <vector>

struct Course {
    int id;
    std::string title;
    int creditHours;
};

class CourseManager {
public:
    bool addCourse(const Course& c);
    std::vector<Course> getAll();
};