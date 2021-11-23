/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:32:29 by cshells           #+#    #+#             */
/*   Updated: 2021/09/11 21:32:30 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
    this->oldest_contact = 0;
}

int Phonebook::searchFreeContact() {
    for (int i = 0; i < BOOK_SIZE; i++)
    {
        if (!this->contact[i].getFilled())
            return (i);
    }
    if (this->oldest_contact > 7)
        this->oldest_contact = 0;
    return (this->oldest_contact++);
}

void Phonebook::addNewContact() {
    int         i;
    std::string value;

    i = this->searchFreeContact();
    this->contact[i].clear();
    std::cout << std::endl;
    std::cout << MAG"Enter first name: "RESET;
    this->readInput(value);
    this->contact[i].setFirstName(value);

    std::cout << MAG"Enter last name: "RESET;
    this->readInput(value);
    this->contact[i].setLastName(value);

    std::cout << MAG"Enter nickname: "RESET;
    this->readInput(value);
    this->contact[i].setNickname(value);

    std::cout << MAG"Enter phone number: "RESET;
    this->readInput(value);
    this->contact[i].setPhoneNumber(value);

    std::cout << MAG"Enter secret: "RESET;
    this->readInput(value);
    this->contact[i].setSecret(value);
    std::cout << std::endl;

    if ((this->contact[i].getFirstName().length()
    || this->contact[i].getLastName().length()
    || this->contact[i].getNickname().length())
    && (this->contact[i].getPhoneNumber().length()
    || this->contact[i].getSecret().length()))
        contact[i].setFilled(1);
    else
    {
        this->contact[i].clear();
        this->contact[i].setFilled(0);
    }
}

std::string Phonebook::truncateString(std::string str) {
    std::string res;

    if (str.length() <= 10)
        return (str);
    res = std::string(str.begin(), str.begin() + 9);
    res += '.';

    return (res);
}

void    Phonebook::showContact(int id) {
    std::cout << std::endl;
    std::cout << CYN"First Name: "RESET << this->contact[id].getFirstName() << std::endl;
    std::cout << CYN"Last Name: "RESET << this->contact[id].getLastName() << std::endl;
    std::cout << CYN"Nickname: "RESET << this->contact[id].getNickname() << std::endl;
    std::cout << CYN"Phone number: "RESET << this->contact[id].getPhoneNumber() << std::endl;
    std::cout << CYN"Secret: "RESET << this->contact[id].getSecret() << std::endl;
    std::cout << std::endl;
}

void    Phonebook::printContactHeader() {
    std::cout << std::endl;
    std::cout << std::setw(10) << "index";
    std::cout << "|";
    std::cout << std::setw(10) << "first name";
    std::cout << "|";
    std::cout << std::setw(10) << "last name";
    std::cout << "|";
    std::cout << std::setw(10) << "nickname";
    std::cout << "|" << std::endl;
}

void    Phonebook::printContactFields() {
    for (int i = 0; i < BOOK_SIZE; i++)
    {
        std::cout << std::setw(10) << i + 1;
        std::cout << "|";
        std::cout << std::setw(10) << this->truncateString(this->contact[i].getFirstName());
        std::cout << "|";
        std::cout << std::setw(10) << this->truncateString(this->contact[i].getLastName());
        std::cout << "|";
        std::cout << std::setw(10) << this->truncateString(this->contact[i].getNickname());
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
}

bool Phonebook::isIdInvalid(std::string str, int & id) {
    if (str.length() != 1 || !isdigit(str[0])
    || (id = std::stoi(str)) > BOOK_SIZE || id < 1)
        return (1);
    return (0);
}

void    Phonebook::search() {
    int         id = 0;
    std::string value = "";

    this->printContactHeader();
    this->printContactFields();
    while (1)
    {
        std::cout << MAG"Enter contact id to view more info: "RESET << std::endl;
        this->readInput(value);
        if (this->isIdInvalid(value, id)) {
            std::cout << YEL"ERROR: INVALID ID. Available values: [1-8]"RESET << std::endl;
            continue ;
        }
        else
            break ;
    }
    if (this->contact[id - 1].getFilled())
        this->showContact(id - 1);
    else
        std::cout << "The contact is empty." << std::endl << std::endl;
}

int     Phonebook::readInput(std::string &value) {
    if (std::getline(std::cin, value).eof())
        exit(0);
    return (value.length());
}

void    Phonebook::exitProgram() {
    exit(0);
}
