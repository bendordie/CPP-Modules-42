/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:26:02 by cshells           #+#    #+#             */
/*   Updated: 2021/08/24 22:26:03 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __IMATERIASOURCE_H__
#define __IMATERIASOURCE_H__

#include <string>
#include "AMateria.hpp"

class IMateriaSource {


public:

    virtual ~IMateriaSource() {};
    virtual void learnMateria(AMateria* materia) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;

};


#endif
