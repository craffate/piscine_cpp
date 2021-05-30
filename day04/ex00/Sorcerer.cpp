/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:36:22 by craffate          #+#    #+#             */
/*   Updated: 2021/05/30 11:09:22 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) :
_name("Sorcerer"), _title("Wizard of the North")
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is born!"
	<< std::endl;
}

Sorcerer::Sorcerer(std::string const name, std::string const title) :
_name(name), _title(title)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is born!"
	<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &s) :
_name(s.getName()), _title(s.getTitle())
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is born!"
	<< std::endl;
}


Sorcerer::~Sorcerer(void)
{
	std::cout << this->getName() << ", " << this->getTitle()
	<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer 			&Sorcerer::operator=(Sorcerer const &s)
{
	_name = s.getName();
	_title = s.getTitle();
	return (*this);
}

std::string			Sorcerer::getName(void) const
{
	return (this->_name);
}

void				Sorcerer::setName(std::string const name)
{
	this->_name = name;
}

std::string			Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void				Sorcerer::setTitle(std::string const title)
{
	this->_title = title;
}

void				Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::ostream		&operator<<(std::ostream &os, Sorcerer const &s)
{
	return (os << "I am " << s.getName() << ", "
	<< s.getTitle() << ", and I like ponies!" << std::endl);
}
