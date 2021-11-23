/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:33:07 by cshells           #+#    #+#             */
/*   Updated: 2021/08/18 16:33:10 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    this->name = "default";
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "ClapTrap constructor for " << this->name << " has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "ClapTrap constructor for " << this->name << " has been called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor for " << this->name << " has been called" << std::endl;
    this->name.clear();
}

int ClapTrap::getAttackDamage() const {
    return (this->attackDamage);
}

int ClapTrap::getEnergyPoints() const {
    return (this->energyPoints);
}

int ClapTrap::getHitPoints() const {
    return (this->hitPoints);
}

std::string ClapTrap::getName() const {
    return (this->name);
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    std::cout << "ClapTrap copy constructor has been called" << std::endl;
    this->name = copy.getName();
    this->attackDamage = copy.getAttackDamage();
    this->energyPoints = copy.getEnergyPoints();
    this->hitPoints = copy.getHitPoints();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    this->name.clear();
    this->name = other.getName();
    this->attackDamage = other.getAttackDamage();
    this->energyPoints = other.getEnergyPoints();
    this->hitPoints = other.getHitPoints();

    return (*this);
}

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << this->name << " attack " << target;
    std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->name << " takes damage equal to ";
    std::cout << amount << " points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->name << " has been repaired for ";
    std::cout << amount << " points!" << std::endl;
}

void ClapTrap::setHitPoints(int amount) {
    this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount) {
    this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount) {
    this->attackDamage = amount;
}

void ClapTrap::setName(std::string name) {
    this->name = name;
}