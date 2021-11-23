/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:36:43 by cshells           #+#    #+#             */
/*   Updated: 2021/08/07 22:36:45 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name) {
    Zombie *zombieUnit;

    zombieUnit = new Zombie(name);
    return zombieUnit;
}
