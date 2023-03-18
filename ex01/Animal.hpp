#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();
    Animal(const Animal& animal);
    Animal& operator= (const Animal& animal);

    virtual void makeSound(void) const;
    std::string getType(void) const;
};

#endif