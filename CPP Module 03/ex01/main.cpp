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
#include "ScavTrap.hpp"

int main() {
    ClapTrap    a("Bazooka");
    ClapTrap    b("Granik");
    ClapTrap    c(a);
    ClapTrap    d("nothing");
    ScavTrap    e("Box");
    ScavTrap    f(e);
    ScavTrap    g("Bla bla");
    ScavTrap    h("Lovushka");

    std::cout << std::endl << std::endl;
    d = c;
    a.attack("Human");
    b.attack("Monkey");
    c.attack("Gook");
    d.attack("Neighbor");
    std::cout << std::endl << std::endl;

    g = e;
    e.attack("Enemy");
    e.guardGate();
    f.attack("Rat");
    f.guardGate();
    g.attack("Bob");
    h.attack("Person");
    std::cout << std::endl << std::endl;

    return (0);
}
