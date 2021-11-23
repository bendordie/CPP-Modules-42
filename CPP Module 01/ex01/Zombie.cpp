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
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
     this->name = name;
}

Zombie::Zombie() {
    Zombie::announce();
}

Zombie::~Zombie() {
    std::cout << this->name << " died." << std::endl;
}

