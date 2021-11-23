/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:30:39 by cshells           #+#    #+#             */
/*   Updated: 2021/08/25 16:30:41 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    *this= other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this == &other)
        return (*this);
    this->grade = other.getGrade();
    return (*this);
}

void Bureaucrat::increaseGrade() {
    if (++this->grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade() {
    if (--this->grade < 0)
        throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getGrade() const {
    return (this->grade);
}

std::string Bureaucrat::getName() const {
    return (this->name);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high!");
}


const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low!");
}

void Bureaucrat::signForm(Form &form) {
    form.beSigned(*this);
}

void Bureaucrat::executeForm(const Form &form) {
    form.execute(*this);
}

std::ostream & operator<<(std::ostream &out, Bureaucrat const & bureaucrat) {
    out << "Bureaucrat " << bureaucrat.getName() << " is " << bureaucrat.getGrade() << " grade";
    return (out);
}
