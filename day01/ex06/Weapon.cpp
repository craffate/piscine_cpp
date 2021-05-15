/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:12:35 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 11:20:19 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

void				Weapon::setType(const std::string type)
{
	this->_type = type;
}
