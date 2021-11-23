/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:55:37 by cshells           #+#    #+#             */
/*   Updated: 2021/08/09 21:55:38 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::SetType(std::string type) {
    this->type = type;
}

const std::string & Weapon::getType() {
    return (this->type);
}

Weapon::Weapon(std::string type) {
    this->type = type;
}
