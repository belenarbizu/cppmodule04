#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->_brain = new Brain();
    this->_type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal()
{
    *this = cat;
    std::cout << "Copy constructor called" << std::endl;
}

Cat& Cat::operator= (const Cat& cat)
{
    this->_type = cat._type;
    return *this;    
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}