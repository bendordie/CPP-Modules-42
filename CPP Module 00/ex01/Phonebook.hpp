/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:32:33 by cshells           #+#    #+#             */
/*   Updated: 2021/09/11 21:32:35 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

# define BOOK_SIZE  8
# define RED        "\x1B[31m"
# define WTH        "\x1B[38m"
# define GRN        "\x1B[32m"
# define YEL        "\x1B[33m"
# define BLU        "\x1B[34m"
# define MAG        "\x1B[35m"
# define CYN        "\x1B[36m"
# define RESET      "\x1B[0m"

class Phonebook {


public:

    Phonebook();

    void    search();
    void    exitProgram();
    void    addNewContact();

private:
    Contact     contact[BOOK_SIZE];
    int         searchFreeContact();
    int         readInput(std::string &value);
    bool        isIdInvalid(std::string str, int & id);
    void        printContactHeader();
    void        printContactFields();
    void        showContact(int id);
    std::string truncateString(std::string str);

    int         oldest_contact;

};

#endif
