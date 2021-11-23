/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:17:48 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 21:17:49 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat [DEFAULT CONSTRUCTOR] has been called\n";

    this->type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat [DESTRUCTOR] has been called\n";
}

WrongCat::WrongCat(const WrongCat &other) {
    std::cout << "WrongCat [COPY CONSTRUCTOR] has been called\n";

    this->type = other.getType();
}

WrongCat & WrongCat::operator=(const WrongCat &other) {
    std::cout << "WrongCat [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}
