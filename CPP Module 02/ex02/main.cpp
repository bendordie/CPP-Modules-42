/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:21:21 by cshells           #+#    #+#             */
/*   Updated: 2021/08/13 20:21:23 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
   Fixed        a;
   Fixed const  b( Fixed(5.05f) * Fixed(2));

   std::cout << a << std::endl;
   std::cout << ++a << std::endl;
   std::cout << a << std::endl;
   std::cout << a++ << std::endl;
   std::cout << a << std::endl;

   std::cout << b << std::endl;

   std::cout << Fixed::max(a, b) << std::endl;
   std::cout << Fixed::min(a, b) << std::endl;

    return (0);
}