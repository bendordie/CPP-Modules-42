/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:30:20 by cshells           #+#    #+#             */
/*   Updated: 2021/08/25 16:30:22 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat Bob("Bob", 150);
//        Bureaucrat Den("Den", 0);
//        Bureaucrat Frank("Frank", 156);

        std::cout << Bob << std::endl;
//        std::cout << Den << std::endl;
//        std::cout << Frank << std::endl;
        Bob.increaseGrade();
    }
    catch (std::exception &e) {
        std::cout << "Can't increase grade because: ";
        std::cout << e.what() << std::endl;
    }

    return (0);
}