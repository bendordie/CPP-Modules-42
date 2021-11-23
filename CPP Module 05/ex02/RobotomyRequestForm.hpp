/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:13:04 by cshells           #+#    #+#             */
/*   Updated: 2021/08/26 02:13:05 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form {


public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & other);
    RobotomyRequestForm & operator=(RobotomyRequestForm const & other);

    void    action() const;

protected:
    RobotomyRequestForm();

};


#endif
