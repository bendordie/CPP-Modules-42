/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:36:30 by cshells           #+#    #+#             */
/*   Updated: 2021/08/07 22:36:31 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << Zombie::name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
    Zombie::announce();
}

Zombie::Zombie(std::string name) {
    this->name = name;
    Zombie::announce();
}

Zombie::~Zombie() {
    std::cout << Zombie::name << " died." << std::endl;
}

