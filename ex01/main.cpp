#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    Animal *animals[4];
    for (int k = 0; k < 4; ++k)
    {
        if (k < 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }
    for (int k = 0; k < 4; ++k)
    {
        animals[k]->makeSound();
        delete animals[k];
    }

    Dog basic;
    basic.getBrain().setIdea(0, "Original idea");
    {
        Dog tmp = basic;
        std::cout << tmp.getBrain().getIdea(0) << std::endl;
        tmp.getBrain().setIdea(0, "Changed idea");
    }
    std::cout << basic.getBrain().getIdea(0) << std::endl;

    return 0;
}
