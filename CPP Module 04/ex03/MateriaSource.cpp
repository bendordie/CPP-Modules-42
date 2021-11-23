/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:25:28 by cshells           #+#    #+#             */
/*   Updated: 2021/08/24 22:25:29 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
//    std::cout << "MateriaSource [DEFAULT CONSTRUCTOR] has been called\n";

    for (std::size_t i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
//    std::cout << "MateriaSource [DESTRUCTOR] has been called\n";
}

MateriaSource::MateriaSource(const MateriaSource &other) {
//    std::cout << "MateriaSource [COPY CONSTRUCTOR] has been called\n";

    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
//    std::cout << "MateriaSource [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    for (std::size_t i = 0; i < 4; i++) {
        this->materias[i] = other.materias[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
    for (std::size_t i = 0; i < 4; i++) {
        if (!this->materias[i]) {
            this->materias[i] = materia;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    if (type != "ice" && type != "cure")
    {
        std::cout << "Unknown type " << type << " to create!\n";
        return (0);
    }
    else
    {
        for (std::size_t i = 0; i < 4; i++) {
            if (this->materias[i] && this->materias[i]->getType() == type) {
                return (this->materias[i]->clone());
            }
        }
    }
    std::cout << "Type [" << type << "] has not yet been learned!\n";
    return (0);
}

