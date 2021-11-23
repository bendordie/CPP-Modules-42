/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:17:32 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 21:17:33 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal [DEFAULT CONSTRUCTOR] has been called\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal [DESTRUCTOR] has been called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "WrongAnimal [COPY CONSTRUCTOR] has been called\n";

    this->type = other.getType();
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

std::string WrongAnimal::getType() const {
    return (this->type);
}

void WrongAnimal::makeSound() const {
    std::cout << "* indecipherable sounds *\n";
}
