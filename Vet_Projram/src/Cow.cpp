#include "Cow.hpp"
#include <utility>

Cow::Cow(std::string name, double temp, double breath, double heart, double milk)
    : Animal(std::move(name), temp, breath, heart), milk(milk) {}

bool Cow::check_health() const {
    bool temp_ok = (temp >= 38.5 && temp <= 39.5);
    bool breath_ok = (breath >= 26.0 && breath <= 50.0);
    bool heart_ok = (heart >= 48.0 && heart <= 84.0);
    bool milk_ok = (milk >= 30.0);
    return temp_ok && breath_ok && heart_ok && milk_ok;
}

double Cow::get_milk() const {
    return milk;
}
