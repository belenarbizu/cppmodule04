#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
    std::cout << "AMateria created" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destroyed" << std::endl;
}

AMateria::AMateria(const AMateria& materia)
{
    *this = materia;
    std::cout << "Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& materia)
{
    this->_type = materia._type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

AMateria* AMateria::clone() const
{

}

void AMateria::use(ICharacter& target)
{

}