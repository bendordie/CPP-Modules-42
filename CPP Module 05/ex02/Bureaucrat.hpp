/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:30:53 by cshells           #+#    #+#             */
/*   Updated: 2021/08/25 16:30:54 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {


public:
    Bureaucrat(std::string name = "untitled", unsigned int grade = 150);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & other);
    Bureaucrat & operator=(Bureaucrat const & other);

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    void            signForm(Form & form);
    void            executeForm(Form const & form);
    void            increaseGrade();
    void            decreaseGrade();
    std::string     getName() const;
    int             getGrade() const;

private:
    Bureaucrat();

    int                     grade;
    const std::string       name;
};

std::ostream & operator<<(std::ostream &out, Bureaucrat const & bureaucrat);

#endif
