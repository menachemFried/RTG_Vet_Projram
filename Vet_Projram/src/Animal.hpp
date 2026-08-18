#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string name;
    double temp;
    double breath;
    double heart;

public:
    Animal(std::string name, double temp, double breath, double heart);
    virtual ~Animal() = default;

    virtual bool check_health() const = 0;

    std::string get_name() const;
    double get_temp() const;
    double get_breath() const;
    double get_heart() const;
};

#endif // ANIMAL_HPP
