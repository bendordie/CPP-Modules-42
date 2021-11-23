/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:52:20 by cshells           #+#    #+#             */
/*   Updated: 2021/08/27 01:52:21 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __INTERN_H__
#define __INTERN_H__

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {


public:

    Intern();
    ~Intern();
    Intern(Intern const & other);
    Intern & operator=(Intern const & other);

    Form*   makeForm(std::string form_name, std::string target);

    class UnknownFormName : public std::exception {
        virtual const char* what() const throw();
    };

};

#endif
