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
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    this->value = num << this->fractionalBits;
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(num * (1 << this->fractionalBits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->value = fixed.value;

    return *this;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
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