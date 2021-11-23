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

#include <iostream>

class Fixed {


public:

    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    Fixed & operator = (const Fixed &fixed);

    int     getRawBits() const;
    void    setRawBits(int const raw);

private:

    int                 value;
    static const int    fractionalBits = 8;


};

#endif
