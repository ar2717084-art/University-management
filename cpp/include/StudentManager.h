#pragma once
#include <string>
#include <vector>

struct Student {
    int id;
    std::string name;
    std::string department;
    float cgpa;
};

class StudentManager {
public:
    bool addStudent(const Student& s);
    std::vector<Student> getAll();
    Student getById(int id);
    bool removeStudent(int id);
};
