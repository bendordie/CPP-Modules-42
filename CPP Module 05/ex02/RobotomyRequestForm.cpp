/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:12:57 by cshells           #+#    #+#             */
/*   Updated: 2021/08/26 02:12:58 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
        Form("RobotomyRequestForm", 72, 45) {
    this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) {
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this == &other)
        return (*this);
    this->setTarget(other.getTarget());
    this->setSigned(other.getSigned());
    return (*this);
}

void RobotomyRequestForm::action() const {
    std::cout << "Vvvvjjjjjjjjjj... Vvvvvjjjjjjjjjj..." << std::endl;
    if (clock() % 2) {
        std::cout << this->getTarget() << " has been successfully robotomized!\n";
    }
    else
        std::cout << "Failed to successfully robotomize " << this->getTarget() << std::endl;
}