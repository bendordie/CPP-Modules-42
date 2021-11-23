/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:36:35 by cshells           #+#    #+#             */
/*   Updated: 2021/08/07 22:36:36 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <string>

class Zombie {


public:
    void    announce();

    Zombie();
    Zombie(std::string name);
    ~Zombie();

private:
    std::string name;

};

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif
