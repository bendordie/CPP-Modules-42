/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:50:16 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 20:50:19 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal {


public:

    Dog();
    ~Dog();
    Dog(Dog const & other);
    Dog & operator=(Dog const & other);

    void makeSound() const;

};

#endif
