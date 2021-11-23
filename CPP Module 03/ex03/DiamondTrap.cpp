/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:41:17 by cshells           #+#    #+#             */
/*   Updated: 2021/08/19 16:41:18 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
    this->name = "default";
    this->setAttackDamage(FragTrap::getAttackDamage());
    this->setEnergyPoints(ScavTrap().getEnergyPoints());
    this->setHitPoints(FragTrap::getHitPoints());
    std::cout << "DiamondTrap constructor for " << this->getName() << " constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
    ScavTrap(name),
    FragTrap(name)
    {
        ClapTrap::setName(name + "_clap_name");
        this->name = name;
        this->setAttackDamage(FragTrap::getAttackDamage());
        this->setEnergyPoints(ScavTrap().getEnergyPoints());
        this->setHitPoints(FragTrap::getHitPoints());
        std::cout << "DiamondTrap constructor for " << this->getName() << " constructor has been called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap dectructor for " << this->getName() << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy.getName()), ScavTrap(copy.getName()), FragTrap(copy.getName()) {
    std::cout << "DiamondTrap copy constructor has been called" << std::endl;
    this->setAttackDamage(copy.getAttackDamage());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    this->getName().clear();
    this->setName(other.getName());
    this->setAttackDamage(other.getAttackDamage());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setHitPoints(other.getHitPoints());

    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->name << " + " << ClapTrap::getName() << std::endl;
}