/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:07:02 by cshells           #+#    #+#             */
/*   Updated: 2021/08/18 18:07:04 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->setName("default");
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
    std::cout << "ScavTrap constructor for " << this->getName() << " constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->setName(name);
    this->setAttackDamage(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
    std::cout << "ScavTrap constructor for " << this->getName() << " constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap dectructor for " << this->getName() << " has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor has been called" << std::endl;
    this->setAttackDamage(copy.getAttackDamage());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    this->getName().clear();
    this->setName(other.getName());
    this->setAttackDamage(other.getAttackDamage());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setHitPoints(other.getHitPoints());

    return *this;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << this->getName() << " attack " << target;
    std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode" << std::endl;
}