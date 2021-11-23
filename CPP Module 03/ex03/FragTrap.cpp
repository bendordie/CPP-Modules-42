/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:52:31 by cshells           #+#    #+#             */
/*   Updated: 2021/08/18 22:52:32 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->setName("default");
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    std::cout << "FragTrap constructor for " << this->getName() << " constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->setName(name);
    this->setAttackDamage(30);
    this->setEnergyPoints(100);
    this->setHitPoints(100);
    std::cout << "FragTrap constructor for " << this->getName() << " constructor has been called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap dectructor for " << this->getName() << " has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.getName()) {
    std::cout << "FragTrap copy constructor has been called" << std::endl;
    this->setAttackDamage(copy.getAttackDamage());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    this->getName().clear();
    this->setName(other.getName());
    this->setAttackDamage(other.getAttackDamage());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setHitPoints(other.getHitPoints());

    return *this;
}

void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << this->getName() << " attack " << target;
    std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->getName() << ": \"High Five!\"" << std::endl;
}