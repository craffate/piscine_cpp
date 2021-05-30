/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:01:04 by craffate          #+#    #+#             */
/*   Updated: 2021/05/30 11:32:24 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) :
_name("Victim")
{
	std::cout << "Some random victim called " << this->getName()
	<< " just appeared!" << std::endl;
}

Victim::Victim(std::string const name) :
_name(name)
{
	std::cout << "Some random victim called " << this->getName()
	<< " just appeared!" << std::endl;
}

Victim::Victim(Victim const &v) :
_name(v.getName())
{
	std::cout << "Some random victim called " << this->getName()
	<< " just appeared!" << std::endl;
}


Victim::~Victim(void)
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason!"
	<< std::endl;
}

Victim 			&Victim::operator=(Victim const &s)
{
	_name = s.getName();
	return (*this);
}

std::string			Victim::getName(void) const
{
	return (this->_name);
}

void				Victim::setName(std::string const name)
{
	this->_name = name;
}

void				Victim::getPolymorphed(void) const
{
	std::cout << this->getName()
	<< " has been turned into a cute little sheep!"
	<< std::endl;
}

std::ostream		&operator<<(std::ostream &os, Victim const &s)
{
	return (os << "I'm " << s.getName() << " and I like otters!"
	<< std::endl);
}
