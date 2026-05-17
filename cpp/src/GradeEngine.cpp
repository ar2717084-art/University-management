#include "../include/GradeEngine.h"

float GradeEngine::calculateGPA(float marks[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) sum += marks[i];
    return (sum / size) / 25.0; // simple conversion
}
