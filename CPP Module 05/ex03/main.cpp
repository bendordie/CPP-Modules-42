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
#include "Intern.hpp"

int main() {
    Intern  rmd;
    Form    *f;

    f = rmd.makeForm("robotomy request", "Bender");

//    Bureaucrat Bob("Bob", 1);
////    ShrubberyCreationForm af("home");
//    RobotomyRequestForm f(Bob.getName());
//
//    try {
//        std::cout << f << std::endl;
//        Bob.signForm(f);
//        Bob.executeForm(f);
//    }
//    catch (std::exception &e) {
//        std::cout << e.what() << std::endl;
//    }

//    std::cout << af << std::endl;
//    af = f;
//    std::cout << af << std::endl;
//    std::cout << f << std::endl;
//    f.action();


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