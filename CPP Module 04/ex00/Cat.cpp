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

Cat::Cat() {
    std::cout << "Cat [DEFAULT CONSTRUCTOR] has been called\n";

    this->type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat [DESTRUCTOR] has been called\n";
}

Cat::Cat(const Cat &other) {
    std::cout << "Cat [COPY CONSTRUCTOR] has been called\n";

    this->type = other.getType();
}

Cat & Cat::operator=(const Cat &other) {
    std::cout << "Cat [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}