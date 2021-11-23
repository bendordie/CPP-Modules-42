/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:54:39 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:54:40 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name) {
    this->weapon = weapon;
    this->name = name;
}

void HumanA::attack() {
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
