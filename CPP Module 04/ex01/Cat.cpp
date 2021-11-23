/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:50:29 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 20:50:30 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() /*: Animal()*/ {
    std::cout << "Cat [DEFAULT CONSTRUCTOR] has been called" << std::endl;

    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat [CUSTOM DESTRUCTOR] has been called" << std::endl;

    if (this->brain)
        delete this->brain;
}

Cat::Cat(const Cat &other) {
    std::cout << "Cat [COPY] has been called" << std::endl;

    *this = other;
}

Cat & Cat::operator=(const Cat &other) {
    std::cout << "Cat [ASSIGNMENT] has been called" << std::endl;

    if (this == &other)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    this->brain = other.brain;
    this->type = other.type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}

void Cat::setIdea(std::string idea) {
    this->brain->setIdea(idea);
}

std::string Cat::getIdea() const {
    return (this->brain->getIdea());
}