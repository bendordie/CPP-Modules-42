/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:50:33 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 20:50:34 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain {


public:

    Cat();
    ~Cat();
    Cat(Cat const & other);
    Cat & operator=(Cat const & other);

    void makeSound() const;
    void setIdea(std::string idea);
    std::string getIdea() const;

private:

    Brain* brain;

};

#endif
