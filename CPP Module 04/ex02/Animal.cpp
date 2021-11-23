/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:48:14 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 20:48:15 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal [CONSTRUCTOR] has been called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal [DESTRUCTOR] has been called" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal [COPY] has been called" << std::endl;

    *this = other;
}

Animal & Animal::operator=(const Animal &other) {
    std::cout << "Animal [ASSIGNMENT] has been called" << std::endl;

    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

std::string Animal::getType() const {
    return (this->type);
}