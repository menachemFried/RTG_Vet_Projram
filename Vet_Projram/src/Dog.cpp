#include "Dog.hpp"
#include <utility>

Dog::Dog(std::string name, double temp, double breath, double heart, bool is_large)
    : Animal(std::move(name), temp, breath, heart), is_large(is_large) {}

bool Dog::check_health() const {
    bool temp_ok = (temp >= 38.0 && temp <= 39.2);
    bool breath_ok = (breath >= 10.0 && breath <= 35.0);
    bool heart_ok = is_large ? (heart >= 60.0 && heart <= 100.0)
                             : (heart >= 100.0 && heart <= 140.0);
    return temp_ok && breath_ok && heart_ok;
}

bool Dog::get_is_large() const {
    return is_large;
}
