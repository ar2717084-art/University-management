#include "../include/utils.h"
#include <sstream>
#include <ctime>

namespace Utils {

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> res;
    std::stringstream ss(str);
    std::string item;
    while (getline(ss, item, delimiter)) res.push_back(item);
    return res;
}

std::string now() {
    time_t t = time(nullptr);
    return std::string(ctime(&t));
}

}
