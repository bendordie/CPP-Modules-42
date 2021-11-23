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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat Bob("Bob", 1);

    PresidentialPardonForm P(Bob.getName());
//    ShrubberyCreationForm S("home");
//    RobotomyRequestForm R(Bob.getName());

    try {
        std::cout << P << std::endl;
        Bob.signForm(P);
        Bob.executeForm(P);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }


//    try {
//        Bureaucrat Bob("Bob", 100);
//        Form       f("Anketa", 120, 110);
//        Form       af("Blank", 10, 30);

//        std::cout << f << std::endl;
//        f.beSigned(Bob);
//        std::cout << f << std::endl;
//        std::cout << af << std::endl;
//        Bob.signForm(af);
//        af.beSigned(Bob);
//        std::cout << af << std::endl;
//    }
//    catch (std::exception &e) {
//        std::cout << e.what() << std::endl;
//    }

    return (0);
}