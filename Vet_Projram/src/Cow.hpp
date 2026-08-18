#ifndef COW_HPP
#define COW_HPP

#include "Animal.hpp"

class Cow : public Animal {
private:
    double milk;

public:
    Cow(std::string name, double temp, double breath, double heart, double milk);
    ~Cow() override = default;

    bool check_health() const override;
    double get_milk() const;
};

#endif // COW_HPP
