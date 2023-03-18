#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->_brain = new Brain();
    this->_type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal()
{
    *this = dog;
    std::cout << "Copy constructor called" << std::endl;
}

Dog& Dog::operator= (const Dog& dog)
{
    this->_type = dog._type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}