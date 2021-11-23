/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:12 by cshells           #+#    #+#             */
/*   Updated: 2021/08/11 18:26:13 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>
#include <string>

class Karen {


public:
   void complain(std::string level);

   Karen();
   ~Karen();

private:
    void debug();
    void info();
    void warning();
    void error();
};

#endif
