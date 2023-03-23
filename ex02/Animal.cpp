#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    *this = animal;
    std::cout << "Copy constructor called" << std::endl;
}

Animal& Animal::operator= (const Animal& animal)
{
    this->_type = animal._type;
    return *this;
}

std::string Animal::getType(void) const
{
    return this->_type;
}