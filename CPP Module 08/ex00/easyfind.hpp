/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:54:58 by cshells           #+#    #+#             */
/*   Updated: 2021/09/08 20:54:59 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <iostream>
#include <algorithm>

class ElemNotFound : public std::exception {
    virtual const char* what() const throw() {
        return "Not found";
    }
};

template <typename T>
typename T::iterator easyFind(T & container, int const & n) {
    typename T::iterator const &found = std::find(container.begin(), container.end(), n);
    if (found == container.end())
        throw ElemNotFound();
    return (found);
}

#endif
