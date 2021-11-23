/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:54:32 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:54:34 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <string>
#include "Weapon.hpp"

class HumanB {


public:
    void attack();
    void setWeapon(Weapon &weapon);

    HumanB(std::string name);

private:
    Weapon *weapon;
    std::string name;

};

#endif

