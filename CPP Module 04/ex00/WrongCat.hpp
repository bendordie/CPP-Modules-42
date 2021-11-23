/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:17:44 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 21:17:45 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {


public:

    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const & other);
    WrongCat & operator=(WrongCat const & other);

    void makeSound() const;

};

#endif
