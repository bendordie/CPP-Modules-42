/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:43:23 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 21:43:25 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <string>

class Brain {


public:

    Brain();
    virtual ~Brain();
    Brain(Brain const & other);
    Brain & operator=(Brain const & other);

    void    setIdea(std::string idea);
    std::string getIdea() const;

protected:

    std::string         ideas[100];
};

#endif
