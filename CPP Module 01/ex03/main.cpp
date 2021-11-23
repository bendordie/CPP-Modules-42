/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:53:57 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:53:58 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.SetType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        club.SetType("some other type of club");
        jim.attack();
    }













//    Weapon Gun;
//
//    Gun.SetType("machine-gun");
//    HumanA A("Arnold", Gun);
//    HumanB B("Bill");
//
//    A.attack();
//    B.attack();

    return (0);
}
