/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:25:44 by cshells           #+#    #+#             */
/*   Updated: 2021/08/24 22:25:45 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {


public:

    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const & other);
    MateriaSource & operator=(MateriaSource const & other);

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);

private:

    AMateria *materias[4];
};

#endif
