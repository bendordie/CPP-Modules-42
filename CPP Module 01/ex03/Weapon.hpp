/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:54:11 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:54:12 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>

class Weapon {


public:
    void SetType(std::string type);
    const std::string & getType();

    Weapon(std::string type);

private:
    std::string type;


};

#endif
