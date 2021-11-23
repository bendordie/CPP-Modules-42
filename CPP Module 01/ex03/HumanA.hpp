/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:54:25 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:54:26 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <string>
#include "Weapon.hpp"

class HumanA {


public:
    void attack();

    HumanA(std::string name, Weapon &weapon);

private:
    Weapon &weapon;
    std::string name;

};

#endif
