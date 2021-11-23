/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:55:47 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 23:55:49 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : virtual public AMateria {


public:

    Ice();
    ~Ice();
    Ice(Ice const & other);
    Ice & operator=(Ice const & other);

    AMateria* clone() const;
    void use(ICharacter& target);


};

#endif
