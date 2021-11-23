/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:44:54 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 21:44:55 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    this->type = "nothing";
}

AMateria::AMateria(const std::string &type) {
    this->type = type;
}

AMateria::~AMateria() {
    this->type.clear();
}

AMateria::AMateria(const AMateria &other) {
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other) {
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

const std::string &AMateria::getType() const {
    return (this->type);
}

void AMateria::use(ICharacter &target) {
    std::cout << "* uses some materia at " << target.getName() << " *\n";
}