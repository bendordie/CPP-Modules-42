/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:36:05 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 20:36:06 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* i = new Cat();
    const Animal* i2 = new Cat();
    //    const Animal* j = new Dog();

    ((Cat*)i)->setIdea("Hello!");
    ((Cat*)i2)->setIdea("Wow");

    std::cout << ((Cat*)i)->getIdea() << std::endl;
    std::cout << ((Cat*)i2)->getIdea() << std::endl;
    std::cout << std::endl;

    *((Cat*)i2) = *((Cat*)i);

    std::cout << ((Cat*)i)->getIdea() << std::endl;
    std::cout << ((Cat*)i2)->getIdea() << std::endl;

    i->makeSound();
    const Animal* zoo[10];

    for (int i = 0; i < 10; i++) {
        if (i < 5)
            zoo[i] = new Cat();
        else
            zoo[i] = new Dog();
    }

//    j->makeSound();
//    i->makeSound();
//
//    for (int i = 0; i < 10; i++) {
//        delete zoo[i];
//    }
//
//    delete i;
//
//    while (1){
//    }

//    const Animal* meta = new Animal();
//    const Animal* j = new Dog();
//    const Animal* i = new Cat();
//
//    std::cout << j->getType() << " " << std::endl;
//    std::cout << i->getType() << " " << std::endl;
//    std::cout << d->getType() << " " << std::endl;
//    i->makeSound();
//    j->makeSound();
//    meta->makeSound();
//    beta->makeSound();

    return (0);
}
