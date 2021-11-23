/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:52:15 by cshells           #+#    #+#             */
/*   Updated: 2021/08/27 01:52:16 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(const Intern &other) {
    *this = other;
}

Intern &Intern::operator=(const Intern &other) {
    (void) other;
    return (*this);
}

const char *Intern::UnknownFormName::what() const throw() {
    return ("Unknown form name!");
}

Form *Intern::makeForm(std::string form_name, std::string target) {
    Form *forms[3] = {
            new ShrubberyCreationForm(target),
            new RobotomyRequestForm(target),
            new PresidentialPardonForm(target)
    };
    std::string form_names_arr[3] = {
            "shrubbery creation",
            "robotomy request",
            "presidential pardon"
    };

    for (size_t i = 0; i < 3; i++) {
        if (form_names_arr[i] == form_name) {
            std::cout << "Intern has successfully created form [" << forms[i]->getName() << "]\n";
            {
                for (size_t j = 0; j < 3; j++) {
                    if (j != i)
                        delete forms[j];
                }
                return (forms[i]);
            }
        }
    }
    std::cout << "Intern can't create form [" << form_name << "] because: ";
    throw UnknownFormName();
}
