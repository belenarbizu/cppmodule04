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
    return (AMateria*)this;
}

void AMateria::use(ICharacter& target)
{
    if(this->_type == "ice")
    {
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    }
    else if (this->_type == "cure")
    {
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    }
}