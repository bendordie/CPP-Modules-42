/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:54:44 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 23:54:47 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
//    std::cout << "Character [DEFAULT CONSTRUCTOR] has been called\n";

    this->name = "default";
    for (std::size_t i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }
}

Character::Character(std::string name) : name(name) {
//    std::cout << "Character [CUSTOM CONSTRUCTOR] has been called\n";

    for (std::size_t i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }
}

Character::~Character() {
//    std::cout << "Character [DESTRUCTOR] has been called\n";

    for (std::size_t i = 0; i < 4; i++) {
        if (this->materias[i])
            delete this->materias[i];
    }
}

Character::Character(const Character &other) {
//    std::cout << "Character [COPY CONSTRUCTOR] has been called\n";

    this->name = other.name;
    for (std::size_t i = 0; i < 4; i++) {
        this->materias[i] = other.materias[i]->clone();
    }
}

Character &Character::operator=(const Character &other) {
//    std::cout << "Character [ASSIGNMENT] has been called\n";

    if (this == &other)
        return (*this);
    for (std::size_t i = 0; i < 4; i++) {
        if (this->materias[i])
            delete this->materias[i];
        if (other.materias[i])
            this->materias[i] = other.materias[i]->clone();
    }
    return (*this);
}

const std::string &Character::getName() const {
    return (this->name);
}

void Character::equip(AMateria *m) {
    for (std::size_t i = 0; i < 4; i++) {
        if (this->materias[i] == m) {
            std::cout << this->name << " already has " << "[" + m->getType() + "]!\n";
            return ;
        }
    }
    for (std::size_t i = 0; i < 4; i++) {
        if (!this->materias[i]) {
            materias[i] = m;
            std::cout << this->name << " has taken " << "[" + m->getType() + "]\n";
            return ;
        }
    }
    std::cout << "The inventory is full!\n";
}

void Character::unequip(int idx) {
    if (this->materias[idx]) {
        this->materias[idx] = NULL;
        return ;
    }
    std::cout << idx << " slot is already empty!\n";
}

void Character::use(int idx, ICharacter &target) {
    if (this->materias[idx]){
        this->materias[idx]->use(target);
        return ;
    }
    std::cout << "Nothing to use...\n";
}
