#include "../include/FeeManager.h"

float FeeManager::calculateFee(int creditHours) {
    return creditHours * 2500;
}
