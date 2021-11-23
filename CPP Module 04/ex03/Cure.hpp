/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:56:00 by cshells           #+#    #+#             */
/*   Updated: 2021/08/23 23:56:01 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria {


public:

    Cure();
    ~Cure();
    Cure(Cure const & other);
    Cure & operator=(Cure const & other);

    AMateria* clone() const;
    void use(ICharacter& target);

private:

};

#endif
