#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(std::string name, double temp, double breath, double heart);
    ~Cat() override = default;

    bool check_health() const override;
};

#endif // CAT_HPP
