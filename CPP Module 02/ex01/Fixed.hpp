/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:21:33 by cshells           #+#    #+#             */
/*   Updated: 2021/08/13 20:21:35 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <cmath>
#include <fstream>
#include <iostream>

class Fixed {


public:

    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    Fixed(const Fixed& fixed);
    Fixed& operator=(const Fixed& fixed);

    int     getRawBits() const;
    void    setRawBits(int const raw);
    int     toInt(void) const;
    float   toFloat(void) const;

private:

    int                 value;
    static const int    fractionalBits = 8;


};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif
