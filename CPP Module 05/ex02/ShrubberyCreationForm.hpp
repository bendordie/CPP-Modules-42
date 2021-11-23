/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:12:39 by cshells           #+#    #+#             */
/*   Updated: 2021/08/26 02:12:41 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SRUBBERYCREATIONFORM_H__
#define __SRUBBERYCREATIONFORM_H__

#include <fstream>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {


public:
    ShrubberyCreationForm(const std::string & target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & other);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & other);

    void    action() const;

protected:
    ShrubberyCreationForm();
};

#endif
