/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:56:59 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 10:44:11 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _alive(true), _mass(1361), _neurons(17000000000)
{
}

Brain::~Brain(void)
{
}

bool					Brain::getStatus(void) const
{
	return (this->_alive);
}

unsigned int			Brain::getMass(void) const
{
	return (this->_mass);
}

unsigned long			Brain::getNeurons(void) const
{
	return (this->_neurons);
}

std::string				Brain::identifier(void) const
{
	std::stringstream	brain;

	brain << this;
	return (brain.str());
}
