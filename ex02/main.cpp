#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main (void)
{
    const Animal* animal[20];

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < 20; i++)
        std::cout << animal[i]->getType() << std::endl;
    
    for (int i = 0; i < 20; i++)
        delete animal[i];

    return (0);
}