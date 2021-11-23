/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:32:40 by cshells           #+#    #+#             */
/*   Updated: 2021/09/11 21:32:41 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(int argc, char **argv)
{
    Phonebook   book;
    std::string cmd;

    while (1)
    {
        std::cout << CYN"================= PHONEBOOK ================"RESET << std::endl << std::endl;
        std::cout << MAG"Enter command: "RESET;
        if (std::getline(std::cin, cmd).eof())
            exit(0);
        if (cmd == "ADD")
            book.addNewContact();
        else if (cmd == "SEARCH")
            book.search();
        else if (cmd == "EXIT")
            book.exitProgram();
        else
        {
            std::cout << std::endl;
            std::cout << YEL"INVALID COMMAND, PLEASE, TRY AGAIN!"RESET << std::endl << std::endl;
            std::cout << YEL"Available commands: "RESET << std::endl;
            std::cout << YEL"ADD - to create new contact."RESET << std::endl;
            std::cout << YEL"SEARCH - to view existing contacts."RESET << std::endl;
            std::cout << YEL"EXIT - to finish program."RESET << std::endl << std::endl;
        }
    }
    return (0);
}
