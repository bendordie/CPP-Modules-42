/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:33:16 by cshells           #+#    #+#             */
/*   Updated: 2021/08/18 16:33:17 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>
#include <string>

class ClapTrap {


public:

    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap & copy);
    ClapTrap & operator=(const ClapTrap & other);

    void        attack(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

    int         getHitPoints() const;
    int         getEnergyPoints() const;
    int         getAttackDamage() const;
    std::string getName() const;


private:

    int         hitPoints;
    int         energyPoints;
    int         attackDamage;
    std::string name;

};

#endif
