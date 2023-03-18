#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Wrong Animal";
    std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wa)
{
    *this = wa;
    std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& wa)
{
    this->_type = wa._type;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "No type of animal" << std::endl;
}