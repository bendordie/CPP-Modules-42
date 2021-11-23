/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:55:43 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 23:55:44 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
//    std::cout << "Ice [DEFAULT CONSTRUCTOR] has been called\n";
}

Ice::~Ice() {
//    std::cout << "Ice [DEFAULT DESTRUCTOR] has been called\n";
}

Ice::Ice(const Ice &other) {
//    std::cout << "Ice [COPY CONSTRUCTOR] has been called\n";

    *this = other;
}

Ice &Ice::operator=(const Ice &other) {
//    std::cout << "Ice [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

AMateria *Ice::clone() const {
    Ice *tmp = new Ice();

    *tmp = *this;
    return (tmp);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
