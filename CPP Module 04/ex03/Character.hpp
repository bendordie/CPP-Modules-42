/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:54:52 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 23:54:53 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter {


public:

    Character(std::string name);
    ~Character();
    Character(Character const & other);
    Character & operator=(Character const & other);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

private:

    Character();

    AMateria    *materias[4];
    std::string name;

};


#endif
