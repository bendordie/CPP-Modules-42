/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:06:28 by cshells           #+#    #+#             */
/*   Updated: 2021/08/17 20:06:30 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0.0f), y(0.0f) {
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::~Point() {
}

Point::Point(const Point &point) : x(point.x), y(point.y) {
}

Point Point::operator=(const Point &other) {
    Point tmp(other);

    delete this;
    return (tmp);
}

const Fixed &Point::getFixedX() const {
    return this->x;
}

const Fixed &Point::getFixedY() const {
    return this->y;
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
    os << "(";
    os << point.getFixedX().toFloat();
    os << ", ";
    os << point.getFixedY().toFloat();
    os << ")";

    return os;
}

bool Point::operator==(const Point &other) const {
    return (this->getFixedX() == other.getFixedX() && this->getFixedY() == other.getFixedY());
}

bool Point::operator!=(const Point &other) const {
    return (this->getFixedX() != other.getFixedX() && this->getFixedY() != other.getFixedY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    float res1;
    float res2;
    float res3;

    if (a == point || b == point || c == point)
        return (false);
    res1 = ((a.getFixedX() - point.getFixedX()) * (b.getFixedY() - a.getFixedY())
            - (b.getFixedX() - a.getFixedX()) * (a.getFixedY() - point.getFixedY())).toFloat();
    res2 = ((b.getFixedX() - point.getFixedX()) * (c.getFixedY() - b.getFixedY())
            - (c.getFixedX() - b.getFixedX()) * (b.getFixedY() - point.getFixedY())).toFloat();
    res3 = ((c.getFixedX() - point.getFixedX()) * (a.getFixedY() - c.getFixedY())
            - (a.getFixedX() - c.getFixedX()) * (c.getFixedY() - point.getFixedY())).toFloat();

    if ((res1 > 0 && res2 > 0 && res3 > 0) || (res1 < 0 && res2 < 0 && res3 < 0))
        return (true);
    else
        return (false);
}