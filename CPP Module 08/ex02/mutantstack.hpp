/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:41:16 by cshells           #+#    #+#             */
/*   Updated: 2021/09/11 13:41:17 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <iostream>
#include <algorithm>
#include <stack>

template < typename T >
class MutantStack : public std::stack<T> {

public:

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    MutantStack() : std::stack<T>() {};
    virtual ~MutantStack() {};
    MutantStack(MutantStack<T> const & other) : std::stack<T>(other) {
    };
    MutantStack const & operator=(MutantStack const & other) {
        if (this != &other) {
            std::stack<T>::operator=(other);
        }
        return *this;
    };

    iterator begin() {
        return (this->c.begin());
    }
    iterator end() {
        return (this->c.end());
    }
    const_iterator begin() const {
        return (this->c.begin());
    }
    const_iterator end() const {
        return (this->c.end());
    }
    reverse_iterator rbegin() {
        return (this->c.rbegin());
    }
    reverse_iterator rend() {
        return (this->c.rend());
    }
    const_reverse_iterator rbegin() const {
        return (this->c.rbegin());
    }
    const_reverse_iterator rend() const {
        return (this->c.rend());
    }

};

#endif
