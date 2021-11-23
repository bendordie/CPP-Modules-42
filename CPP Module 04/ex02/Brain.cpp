/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:43:20 by cshells           #+#    #+#             */
/*   Updated: 2021/08/20 21:43:21 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain [DEFAULT CONSTRUCTOR] has been called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain [DESTRUCTOR] has been called" << std::endl;

    for (int i = 0; i < 100; i++) {
        this->ideas[i].clear();
    }
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain [COPY] has been called" << std::endl;

    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
}

Brain & Brain::operator=(const Brain &other) {
    std::cout << "Brain [ASSIGNMENT] has been called" << std::endl;

    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

void Brain::setIdea(std::string idea) {
    this->ideas[0] = idea;
}

std::string Brain::getIdea() const {
    return (this->ideas[0]);
}