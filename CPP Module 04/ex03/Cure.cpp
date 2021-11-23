/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:55:54 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 23:55:56 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
//    std::cout << "Cure [DEFAULT CONSTRUCTOR] has been called\n";
}

Cure::~Cure() {
//    std::cout << "Cure [DESTRUCTOR] has been called\n";
}

Cure::Cure(const Cure &other) {
//    std::cout << "Cure [COPY CONSTRUCTOR] has been called\n";

    *this = other;
}

Cure &Cure::operator=(const Cure &other) {
//    std::cout << "Cure [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

AMateria *Cure::clone() const {
    Cure *tmp = new Cure();

    *tmp = *this;
    return (tmp);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
