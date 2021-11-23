/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:40:54 by cshells           #+#    #+#             */
/*   Updated: 2021/09/07 20:40:55 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>

template <class T>
class Array {

public:

    Array() : array(new T), _size(0) {};
    Array(unsigned int n) : array(new T[n]), _size(n) {};
    ~Array() { delete this->array; this->array = 0; }
    Array(Array<T> const & other) {
        this->array = new T[other.size()];
        this->_size = other.size();
        for (unsigned int i = 0; i < this->size(); i++) {
            this->array[i] = other.array[i];
        }
    };

    Array<T> const & operator=(Array<T> const & other) {
        if (this == &other)
            return *this;
        delete this->array;
        this->_size = other.size();
        this->array = new T[other.size()];
        for (unsigned int i = 0; i < this->size(); i++) {
            this->array[i] = other.array[i];
        }
        return *this;
    };

    T & operator[](unsigned int index) {
        if (index < this->size())
            return this->array[index];
        else
            throw ArrayOutOfRangeExc();
    };

class ArrayOutOfRangeExc : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Out of range";
    }
};

    unsigned int size() const { return _size; } ;

private:

    T*  array;
    unsigned int    _size;

};

#endif
