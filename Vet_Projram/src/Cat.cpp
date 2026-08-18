#include "Cat.hpp"
#include <utility>

Cat::Cat(std::string name, double temp, double breath, double heart)
    : Animal(std::move(name), temp, breath, heart) {}

bool Cat::check_health() const {
    bool temp_ok = (temp >= 38.0 && temp <= 39.2);
    bool breath_ok = (breath >= 16.0 && breath <= 40.0);
    bool heart_ok = (heart >= 120.0 && heart <= 140.0);
    return temp_ok && breath_ok && heart_ok;
}
