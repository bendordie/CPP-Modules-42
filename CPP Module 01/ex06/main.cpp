/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:01 by cshells           #+#    #+#             */
/*   Updated: 2021/08/11 18:26:02 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char* argv[])
{
    Karen K;

    if (argc == 2){
        for (size_t i = 0; i < strlen(argv[1]); i++)
        {
            argv[1][i] = tolower(argv[1][i]);
        }
        K.complain(argv[1]);
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return (0);
}
