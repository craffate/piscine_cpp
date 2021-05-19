/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:00:24 by craffate          #+#    #+#             */
/*   Updated: 2021/05/19 09:15:14 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	_raw = f.getRawBits();
}

Fixed&	Fixed::operator= (Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	_raw = f.getRawBits();

	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}
