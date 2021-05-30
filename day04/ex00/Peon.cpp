/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:16:34 by craffate          #+#    #+#             */
/*   Updated: 2021/05/30 11:36:58 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) :
Victim(), _name("Peon")
{
	std::cout << "Some random victim called " << this->getName()
	<< " just appeared!" << std::endl;
}

Peon::Peon(std::string const name) :
Victim(name), _name(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &p) :
_name(p.getName())
{
	std::cout << "Zog zog" << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon 			&Peon::operator=(Peon const &s)
{
	_name = s.getName();
	return (*this);
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->getName()
	<< " has turned into a pink pony!"
	<< std::endl;
}
