/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:06:33 by cshells           #+#    #+#             */
/*   Updated: 2021/08/17 20:06:34 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point {


public:

    Point();
    ~Point();
    Point(const Point& point);
    Point(const float x, const float y);

    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    Point operator=(const Point& other);


    const Fixed& getFixedX() const;
    const Fixed& getFixedY() const;

private:

    Fixed const x;
    Fixed const y;


};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream& operator<<(std::ostream &os, const Point& point);

#endif
