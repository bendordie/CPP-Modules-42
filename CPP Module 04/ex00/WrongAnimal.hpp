/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:17:36 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 21:17:37 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>
#include <string>

class WrongAnimal {


public:

    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(WrongAnimal const & other);
    WrongAnimal & operator=(WrongAnimal const & other);

    void makeSound() const;
    std::string getType() const;

protected:

    std::string type;

};

#endif
