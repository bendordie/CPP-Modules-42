/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:35:47 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:35:48 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string:           " << &str << std::endl;
    std::cout << "Address of the string stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of the string stringREF: " << &stringREF << std::endl << std::endl;

    std::cout << "The string from pointer: " << *stringPTR << std::endl;
    std::cout << "The string from reference: " << stringREF << std::endl;

    return (0);
}
