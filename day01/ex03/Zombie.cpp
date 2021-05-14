/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:33:31 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 12:17:56 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _type("Generic")
{
	Zombie::_count += 1;
	this->setName("Zombie #" + std::to_string(Zombie::_count));
}

Zombie::Zombie(std::string name) : _type("Generic"), _name(name)
{
	Zombie::_count += 1;
}

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
	Zombie::_count += 1;
}

Zombie::~Zombie(void)
{
	Zombie::_count -= 1;
}

unsigned int		Zombie::_count = 0;

std::string			Zombie::getType(void) const
{
	return (this->_type);
}

void				Zombie::setType(std::string type)
{
	this->_type = type;
}

std::string			Zombie::getName(void) const
{
	return (this->_name);
}

void				Zombie::setName(std::string name)
{
	this->_name = name;
}

void				Zombie::advert(void) const
{
	std::cout << "<" << this->getName() << " (" << this->getType() << ")> "
	<< "Braiiiiiiinnnssss ..." << std::endl;
}

void				Zombie::announce(void) const
{
	std::cout << this->getName() << " has arrived!" << std::endl;
}
