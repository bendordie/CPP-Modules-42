/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:50:23 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 20:50:24 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog [DEFAULT CONSTRUCTOR] has been called" << std::endl;

    this->type = "Dog";
    this->brain = new Brain();

}

Dog::~Dog() {
    std::cout << "Dog [DESTRUCTOR] has been called" << std::endl;

    if (this->brain)
        delete this->brain;
}

Dog::Dog(const Dog &other) {
    std::cout << "Dog [COPY] has been called" << std::endl;

    *this = other;
}

Dog & Dog::operator=(const Dog &other) {
    std::cout << "Dog [ASSIGNMENT] has been called" << std::endl;

    if (this == &other)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    this->brain = other.brain;
    this->type = other.type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Gav Gav!" << std::endl;
}