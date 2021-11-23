/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:07:08 by cshells           #+#    #+#             */
/*   Updated: 2021/08/18 18:07:17 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {


public:

    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap & copy);
    ScavTrap & operator=(const ScavTrap & other);

    void    guardGate();
    void    attack(std::string const & target);

};

#endif
