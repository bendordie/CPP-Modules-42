/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:31:41 by cshells           #+#    #+#             */
/*   Updated: 2021/09/11 21:31:42 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::getFilled() {
    return (filled);
}
std::string Contact::getFirstName() {
    return (firstName);
}

std::string Contact::getLastName() {
    return (lastName);
}

std::string Contact::getNickname() {
    return (nickname);
}

std::string Contact::getPhoneNumber() {
    return (phoneNumber);
}

std::string Contact::getSecret() {
    return (secret);
}

void Contact::clear() {
    firstName.clear();
    lastName.clear();
    nickname.clear();
    phoneNumber.clear();
    secret.clear();
}
void Contact::setFilled(bool condition) {
    filled = condition;
}

void Contact::setFirstName(std::string value)
{
    firstName = value;
}

void Contact::setLastName(std::string value)
{
    lastName = value;
}

void Contact::setNickname(std::string value)
{
    nickname = value;
}

void Contact::setPhoneNumber(std::string value)
{
    phoneNumber = value;
}

void Contact::setSecret(std::string value)
{
    secret = value;
}
