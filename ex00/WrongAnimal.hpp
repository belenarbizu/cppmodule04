#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal& wa);
    WrongAnimal& operator= (const WrongAnimal& wa);

    void makeSound(void) const;
};

#endif