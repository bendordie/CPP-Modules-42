/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:07 by cshells           #+#    #+#             */
/*   Updated: 2021/08/11 18:26:08 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {

}

Karen::~Karen() {

}

void Karen::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for "
                 "my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money."
                 "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;

}

void Karen::complain(std::string level) {
    void (Karen:: * cmd[])(void) = {
            &Karen::debug,
            &Karen::info,
            &Karen::warning,
            &Karen::error
    };
    std::string input[] = {
            "debug",
            "info",
            "warning",
            "error"
    };

    for (size_t i = 0; i < input->length() - 1; i++)
    {
        if (level == input[i])
        {
            for (size_t j = i; j < input->length() - 1; j++)
            {
                (this->*cmd[j])();
            }
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
