/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:41:21 by cshells           #+#    #+#             */
/*   Updated: 2021/08/19 16:41:22 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {


public:

    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(DiamondTrap const & copy);
    DiamondTrap & operator=(DiamondTrap const & other);

    void whoAmI();
    using ScavTrap::attack;

private:

    std::string name;

};

#endif