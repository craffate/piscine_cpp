/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 09:18:39 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 09:49:47 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) : _size(0), _weight(0), _color("Colorless")
{
	std::cout << "Pony created without parameters!" << std::endl;
}

Pony::Pony(unsigned int size, unsigned int weight, std::string color) : _size(size), _weight(weight), _color(color)
{
	std::cout << "Pony created with parameters!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony destroyed!" << std::endl;
}

unsigned int	Pony::getSize(void) const
{
	return (this->_size);
}

unsigned int	Pony::getWeight(void) const
{
	return (this->_weight);
}

std::string		Pony::getColor(void) const
{
	return (this->_color);
}

void			Pony::printPony(void) const
{
	std::cout << "Size: " << std::to_string(this->getSize()) << std::endl
	<< "Weight: " << std::to_string(this->getWeight()) << std::endl
	<< "Color: " << this->getColor() << std::endl;
}
