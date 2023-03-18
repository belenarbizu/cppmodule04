#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& brain)
{
    *this = brain;
    std::cout << "Copy constructor called" << std::endl;
}

Brain& Brain::operator= (const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = brain._ideas[i];
    return *this;
}