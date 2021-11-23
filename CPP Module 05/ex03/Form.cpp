/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:05:30 by cshells           #+#    #+#             */
/*   Updated: 2021/08/25 23:05:31 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
        is_signed(false),
        grade_to_sign(0),
        grade_to_execute(0),
        name("untitled") {
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) :
        is_signed(false),
        grade_to_sign(grade_to_sign),
        grade_to_execute(grade_to_execute),
        name(name) {
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw Form::GradeTooLowException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw Form::GradeTooHighException();
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}

const char *Form::FormAlreadySigned::what() const throw() {
    return ("Form is already signed!");
}

const char *Form::FormNotSigned::what() const throw() {
    return ("Form is not signed yet!");
}

Form::~Form() {

}

Form::Form(const Form &other) :
    grade_to_sign(other.getGradeToSign()),
    grade_to_execute(other.getGradeToExecute()) {
    *this = other;
}

Form &Form::operator=(const Form &other) {
    if (this == &other)
        return (*this);
    this->is_signed = other.getSigned();
    return (*this);
}

std::string Form::getName() const {
    return (this->name);
}

std::string Form::getTarget() const {
    return (this->target);
}

void Form::setTarget(std::string target) {
    this->target = target;
}

void Form::setSigned(bool status) {
    this->is_signed = status;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (this->grade_to_sign >= bureaucrat.getGrade()) {
        this->is_signed = true;
        std::cout << bureaucrat.getName() << " signs " << this->name << " successfully!\n";
    }
    else {
        std::cout << bureaucrat.getName() << " cannot sign " << "[" + this->name + "]" << " because: ";
        if (this->is_signed)
            throw Form::FormAlreadySigned();
        else
            throw Form::GradeTooLowException();
    }
}

int Form::getGradeToSign() const {
    return (this->grade_to_sign);
}

int Form::getGradeToExecute() const {
    return (this->grade_to_execute);
}

bool Form::getSigned() const {
    return (this->is_signed);
}

void Form::execute(const Bureaucrat &executor) const {
    if (!this->is_signed)
        throw Form::FormNotSigned();
    if (this->grade_to_execute < executor.getGrade())
        throw Form::GradeTooLowException();
    std::cout << executor.getName() << " has successfully executed " << this->name << std::endl;
    this->action();
}

std::ostream & operator<<(std::ostream &out, Form &form) {
    out << "Form [" << form.getName() << "]\n";
    out << "grade to sign: " << form.getGradeToSign() << std::endl;
    out << "grade to excute: " << form.getGradeToExecute() << std::endl;
    out << "target: " << form.getTarget() << std::endl;
    out << "signed: " << form.getSigned() << std::endl;
    return (out);
}