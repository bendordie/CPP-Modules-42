/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:54:45 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:54:46 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = nullptr;
}

void HumanB::attack() {
    if (weapon)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " have no any weapon to attack" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
