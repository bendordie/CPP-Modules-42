/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:44:59 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 21:45:00 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {


public:

    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria(AMateria const & other);
    AMateria & operator=(AMateria const & other);

    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:

    AMateria();

    std::string type;

};

#endif
