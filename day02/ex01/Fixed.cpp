/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:00:24 by craffate          #+#    #+#             */
/*   Updated: 2021/05/20 15:55:53 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _raw((n << 8))
{
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _raw(roundf(n * (1 << Fixed::_bits)))
{
	std::cout << "Float constructor called" << std::endl;
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

Fixed&				Fixed::operator=(Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	_raw = f.getRawBits();

	return (*this);
}

int					Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void				Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

float				Fixed::toFloat(void) const
{
	return (this->getRawBits() / 256.0f);
}

int					Fixed::toInt(void) const
{
	return ((this->getRawBits() >> Fixed::_bits));
}

std::ostream&		operator<<(std::ostream &os, Fixed const &f)
{
	os << std::to_string(f.getRawBits());

	return (os);
}
