/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:36:18 by cshells           #+#    #+#             */
/*   Updated: 2021/08/07 22:36:20 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombieUnit;

    zombieUnit = newZombie("Jonny");
    randomChump("Barsuk");
    randomChump("Derek");

    delete zombieUnit;
    return (0);
}
