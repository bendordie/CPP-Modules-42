/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:31:46 by cshells           #+#    #+#             */
/*   Updated: 2021/09/11 21:31:47 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _CLASS_CONTACT_H_
# define _CLASS_CONTACT_H_

#include <string>

# define CONTACT_FIELDS_NUM 5;

class Contact {
private:
    bool        filled;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string secret;

public:
    int         getFilled();
    void        clear();
    void        setFilled(bool condition);
    void        setFirstName(std::string value);
    void        setLastName(std::string value);
    void        setNickname(std::string value);
    void        setPhoneNumber(std::string value);
    void        setSecret(std::string value);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNumber();
    std::string getSecret();
};

#endif
