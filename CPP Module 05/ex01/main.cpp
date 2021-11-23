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
#include "Form.hpp"

int main() {
    try {
        Bureaucrat Bob("Bob", 100);
        Form       f("CreationForm", 120, 110);
        Form       af("RequestForm", 10, 30);

        std::cout << f << std::endl;
        f.beSigned(Bob);
        std::cout << f << std::endl;
        std::cout << af << std::endl;
        Bob.signForm(af);
//        af.beSigned(Bob);
        std::cout << af << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}