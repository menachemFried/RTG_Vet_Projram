#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
private:
    bool is_large;

public:
    Dog(std::string name, double temp, double breath, double heart, bool is_large);
    ~Dog() override = default;

    bool check_health() const override;
    bool get_is_large() const;
};

#endif // DOG_HPP
