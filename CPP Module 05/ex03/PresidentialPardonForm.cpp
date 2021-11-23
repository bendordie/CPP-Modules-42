/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:13:28 by cshells           #+#    #+#             */
/*   Updated: 2021/08/26 02:13:29 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
        Form("PresidentialPardonForm", 25, 5) {
    this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) {
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this == &other)
        return (*this);
    this->setTarget(other.getTarget());
    this->setSigned(other.getSigned());
    return (*this);
}

void PresidentialPardonForm::action() const {
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox\n";
}
