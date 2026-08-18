#include "Animal.hpp"
#include <utility>

Animal::Animal(std::string name, double temp, double breath, double heart)
    : name(std::move(name)), temp(temp), breath(breath), heart(heart) {}

std::string Animal::get_name() const {
    return name;
}

double Animal::get_temp() const {
    return temp;
}

double Animal::get_breath() const {
    return breath;
}

double Animal::get_heart() const {
    return heart;
}
