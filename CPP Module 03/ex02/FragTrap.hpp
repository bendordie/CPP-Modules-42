/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:52:35 by cshells           #+#    #+#             */
/*   Updated: 2021/08/18 22:52:36 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {


public:

    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const & copy);
    FragTrap & operator=(FragTrap const & other);

    void attack(std::string const & target);
    void highFivesGuys();

};

#endif