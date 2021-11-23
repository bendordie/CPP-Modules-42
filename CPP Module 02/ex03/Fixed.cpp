/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:21:29 by cshells           #+#    #+#             */
/*   Updated: 2021/08/13 20:21:30 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    this->setRawBits(0);
}

Fixed::Fixed(const int num) {
    this->value = num << this->fractionalBits;
}

Fixed::Fixed(const float num) {
    this->value = roundf(num * (1 << this->fractionalBits));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &fixed) {
    this->value = fixed.value;
}

Fixed &Fixed::operator=(const Fixed &other) {
    this->value = other.value;

    return *this;
}

Fixed &Fixed::operator=(const float point) {
    this->value = roundf(point * (1 << this->fractionalBits));

    return *this;
}

int Fixed::getRawBits() const {
    return this->value;
}

void Fixed::setRawBits(const int raw) {
    this->value = raw;
}

int Fixed::toInt() const {
    return (this->value >> this->fractionalBits);
}

float Fixed::toFloat() const {
    float result;

    result = ((float)this->value) / (1 << this->fractionalBits);
    return (result);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();

    return os;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>(const Fixed &other) const {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const {
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;

    result.setRawBits(this->getRawBits() + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;

    result.setRawBits(this->getRawBits() - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;

    result = *this;
    return (result.toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;

    result = *this;
    return (result.toFloat() / other.toFloat());
}

Fixed &Fixed::operator++() {
    this->value++;

    return *this;
}

Fixed &Fixed::operator--() {
    this->value--;

    return *this;
}

Fixed Fixed::operator++(int post) {
    Fixed   temp(*this);

    post = 0;
    this->value++;

    return temp;
}

Fixed Fixed::operator--(int post) {
    Fixed   temp(*this);

    post = 0;
    this->value--;

    return temp;
}

Fixed &Fixed::min(Fixed &left, Fixed &right) {
    return (left < right ? left : right);
}

Fixed &Fixed::max(Fixed &left, Fixed &right) {
    return (left > right ? left : right);
}

const Fixed &Fixed::min(const Fixed &left, const Fixed &right) {
    return (left < right ? left : right);
}

const Fixed &Fixed::max(const Fixed &left, const Fixed &right) {
    return (left > right ? left : right);
}
