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

#include "Point.hpp"

int main() {
    Point A(4.6f, -1.02f); //https://abakbot.ru/online-2/280-pointreug
    Point B(6.3f, 4.38f);
    Point C(12.14f, 2.58f);
    Point D(7.78f, 2.38f); //inside
    Point F(4.72f, 0.24f); //outside
    Point E(10.85f, 1.96f); //on edge
    bool result;

    std::cout.setf(std::ios_base::boolalpha);
    result = bsp(A, B, C, D);
    std::cout << "D: " << result << std::endl;
    result = bsp(A, B, C, F);
    std::cout << "F: " << result << std::endl;
    result = bsp(A, B, C, E);
    std::cout << "E: " << result << std::endl;

    return (0);
}