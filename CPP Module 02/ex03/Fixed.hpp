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

    Fixed& operator=(const Fixed& other);
    Fixed& operator=(const float point);
    bool operator<(const Fixed& other) const;
    bool operator>(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int post);
    Fixed operator--(int post);

    int                 getRawBits() const;
    void                setRawBits(int const raw);
    int                 toInt(void) const;
    float               toFloat(void) const;
    static Fixed&       min(Fixed& left, Fixed& right);
    static Fixed&       max(Fixed& left, Fixed& right);
    const static Fixed& min(const Fixed& left, const Fixed& right);
    const static Fixed& max(const Fixed& left, const Fixed& right);

private:

    int                 value;
    static const int    fractionalBits = 8;

};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif
