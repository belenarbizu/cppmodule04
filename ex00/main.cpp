#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void)
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << animal->getType() << " " << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    wa->makeSound();
    wc->makeSound();

    delete animal;
    delete cat;
    delete dog;
    delete wa;
    delete wc;
    return (0);
}