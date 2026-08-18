#ifndef VET_HPP
#define VET_HPP

#include <vector>
#include <memory>
#include "Animal.hpp"

class Vet {
private:
    std::vector<std::unique_ptr<Animal>> animals;

    Vet();
    ~Vet() = default;

    Vet(const Vet&) = delete;
    Vet& operator=(const Vet&) = delete;
    Vet(Vet&&) = delete;
    Vet& operator=(Vet&&) = delete;

public:
    static Vet& get_instance();

    void add_animal(Animal*&& animal);
    void show_sick() const;
    void show_sick_dogs() const;
};

#endif // VET_HPP
