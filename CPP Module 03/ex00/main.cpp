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

int main() {
    ClapTrap    a("Bazooka");
    ClapTrap    b("Granik");
    ClapTrap    c(a);
    ClapTrap    d("Nothing");

    d = c;
    a.attack("Human");
    b.attack("Monkey");
    c.attack("Gook");
    d.attack("Neighbor");

    return (0);
}
