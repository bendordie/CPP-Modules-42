/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:29:54 by cshells           #+#    #+#             */
/*   Updated: 2021/09/06 23:29:55 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>

template <typename T>
void    iter(T* array, int length, void (*f)(T const & x)) {
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

#endif
