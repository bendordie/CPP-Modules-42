/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:05:34 by cshells           #+#    #+#             */
/*   Updated: 2021/08/25 23:05:35 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_H__
#define __FORM_H__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {


public:

    Form(std::string name, int grade_to_sign, int grade_to_execute);
    virtual ~Form();
    Form(Form const & other);
    Form & operator=(Form const & other);

    void            beSigned(Bureaucrat const & bureaucrat);
    bool            getSigned() const;

    int             getGradeToSign() const;
    int             getGradeToExecute() const;
    std::string     getName() const;
    std::string     getTarget() const;

    void            setTarget(std::string target);
    void            setSigned(bool status);
    void            execute(Bureaucrat const & executor) const;
    virtual void    action() const = 0;

//    void        setGradeToSign(int grade);
//    void        setGradeToExecute()

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    class FormAlreadySigned : public std::exception {
        virtual const char* what() const throw();
    };

    class FormNotSigned : public std::exception {
        virtual const char* what() const throw();
    };

private:

    bool                is_signed;
    const int           grade_to_sign;
    const int           grade_to_execute;
    const std::string   name;
    std::string         target;

protected:

    Form();

};

std::ostream & operator<<(std::ostream &out, Form &form);

#endif
