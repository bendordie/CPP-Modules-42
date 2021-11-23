/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:48:00 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 20:48:01 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal {


public:

    Animal();
    virtual ~Animal();
    Animal(Animal const & other);
    virtual Animal & operator=(Animal const & other);

    virtual void makeSound() const;
    std::string getType() const;

protected:

    std::string type;

};

#endif
