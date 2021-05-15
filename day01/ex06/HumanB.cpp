/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:22:26 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 12:49:29 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

const Weapon	*HumanB::getWeapon(void) const
{
	return (this->_weapon);
}

void			HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void			HumanB::attack(void) const
{
	std::cout << this->_name
	<< " attack with his "
	<< this->_weapon->getType()
	<< std::endl;
}
