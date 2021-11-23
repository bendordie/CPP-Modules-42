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
    std::cout << "Dog [DEFAULT CONSTRUCTOR] has been called\n";

    this->type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog [DESTRUCTOR] has been called\n";
}

Dog::Dog(const Dog &other) {
    std::cout << "Dog [COPY CONSTRUCTOR] has been called\n";

    this->type = other.getType();
}

Dog & Dog::operator=(const Dog &other) {
    std::cout << "Dog [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Gav Gav!" << std::endl;
}