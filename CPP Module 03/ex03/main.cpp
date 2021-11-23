/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:32:59 by cshells           #+#    #+#             */
/*   Updated: 2021/08/18 16:33:00 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap a("Monster");
    DiamondTrap b(a);

    std::cout << "HP: " << a.getHitPoints() << std::endl;
    std::cout << "Energy: " << a.getEnergyPoints() << std::endl;
    std::cout << "Damage: " << a.getAttackDamage() << std::endl;

    a.setHitPoints(123);
//    a.setName("Lol");

    DiamondTrap c(a);
//    std::cout << "Name: " << c.getName() << std::endl;
//    std::cout << "HP: " << c.getHitPoints() << std::endl;
//    std::cout << "Energy: " << c.getEnergyPoints() << std::endl;
//    std::cout << "Damage: " << c.getAttackDamage() << std::endl;
//    b.attack("People");
    a.whoAmI();
    return (0);
}