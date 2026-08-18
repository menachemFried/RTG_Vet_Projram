#include "Vet.hpp"
#include "Dog.hpp"
#include <iostream>

Vet::Vet() : animals() {}

Vet& Vet::get_instance() {
    static Vet instance;
    return instance;
}

void Vet::add_animal(Animal*&& animal) {
    if (animal != nullptr) {
        animals.push_back(std::unique_ptr<Animal>(animal));
        animal = nullptr;
    }
}

void Vet::show_sick() const {
    for (const auto& animal : animals) {
        if (animal && !animal->check_health()) {
            std::cout << animal->get_name() << " ";
        }
    }
    std::cout << std::endl;
}

void Vet::show_sick_dogs() const {
    for (const auto& animal : animals) {
        if (animal) {
            const Dog* dog = dynamic_cast<const Dog*>(animal.get());
            if (dog != nullptr && !dog->check_health()) {
                std::cout << dog->get_name() << " ";
            }
        }
    }
    std::cout << std::endl;
}
