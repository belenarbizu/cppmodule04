#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
    this->_type = "Wrong Cat";
    std::cout << "Wrong Cat created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wc) : WrongAnimal()
{
    *this = wc;
    std::cout << "Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& wc)
{
    this->_type = wc._type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "meow!" << std::endl;
}