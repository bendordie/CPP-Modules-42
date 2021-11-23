/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 00:03:00 by cshells           #+#    #+#             */
/*   Updated: 2021/08/08 00:03:01 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *zombieArr;

    zombieArr = new Zombie[N];
    for (int i = 0; i < N; i++){
        zombieArr[i].setName(name);
    }

    return (zombieArr);
}
