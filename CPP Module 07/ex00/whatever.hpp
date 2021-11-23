/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 00:04:48 by cshells           #+#    #+#             */
/*   Updated: 2021/09/05 00:04:49 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WHATEVER_H__
# define __WHATEVER_H__

template <typename T>
void swap(T& value1, T& value2) {
    T buf;

    buf = value1;
    value1 = value2;
    value2 = buf;
}

template <typename T>
T&       min(T& value1, T& value2) {
    return (value1 < value2 ? value1 : value2);
}

template <typename T>
T&       max(T& value1, T& value2) {
    return (value1 > value2 ? value1 : value2);
}

#endif
