/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 09:54:55 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 08:53:46 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string			Contact::getFname(void) const
{
	return (this->_fname);
}

void				Contact::setFname(std::string fname)
{
	this->_fname = fname;
}

void				Contact::askFname(void)
{
	std::string		line;

	std::cin >> line;
	this->setFname(line);
}

std::string			Contact::getLname(void) const
{
	return (this->_lname);
}

void				Contact::setLname(std::string lname)
{
	this->_lname = lname;
}

void				Contact::askLname(void)
{
	std::string		line;

	std::cin >> line;
	this->setLname(line);
}

std::string			Contact::getNick(void) const
{
	return (this->_nick);
}

void				Contact::setNick(std::string nick)
{
	this->_nick = nick;
}

void				Contact::askNick(void)
{
	std::string		line;

	std::cin >> line;
	this->setNick(line);
}

std::string			Contact::getLogin(void) const
{
	return (this->_login);
}

void				Contact::setLogin(std::string login)
{
	this->_login = login;
}

void				Contact::askLogin(void)
{
	std::string		line;

	std::cin >> line;
	this->setLogin(line);
}

std::string			Contact::getAddr(void) const
{
	return (this->_addr);
}

void				Contact::setAddr(std::string addr)
{
	this->_addr = addr;
}

void				Contact::askAddr(void)
{
	std::string		line;

	std::cin >> line;
	this->setAddr(line);
}

std::string			Contact::getMail(void) const
{
	return (this->_mail);
}

void				Contact::setMail(std::string mail)
{
	this->_mail = mail;
}

void				Contact::askMail(void)
{
	std::string		line;

	std::cin >> line;
	this->setMail(line);
}

std::string			Contact::getPhone(void) const
{
	return (this->_phone);
}

void				Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

void				Contact::askPhone(void)
{
	std::string		line;

	std::cin >> line;
	this->setPhone(line);
}

std::string			Contact::getBday(void) const
{
	return (this->_bday);
}

void				Contact::setBday(std::string bday)
{
	this->_bday = bday;
}

void				Contact::askBday(void)
{
	std::string		line;

	std::cin >> line;
	this->setBday(line);
}

std::string			Contact::getMeal(void) const
{
	return (this->_meal);
}

void				Contact::setMeal(std::string meal)
{
	this->_meal = meal;
}

void				Contact::askMeal(void)
{
	std::string		line;

	std::cin >> line;
	this->setMeal(line);
}

std::string			Contact::getColor(void) const
{
	return (this->_color);
}

void				Contact::setColor(std::string color)
{
	this->_color = color;
}

void				Contact::askColor(void)
{
	std::string		line;

	std::cin >> line;
	this->setColor(line);
}

std::string			Contact::getSecret(void) const
{
	return (this->_secret);
}

void				Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}

void				Contact::askSecret(void)
{
	std::string		line;

	std::cin >> line;
	this->setSecret(line);
}

std::string			Contact::truncate(const std::string s)
{
	unsigned int	idx;
	std::string		ret;

	idx = 0;
	if (10 < s.length())
		ret = s.substr(0, 9) + ".";
	else
		ret = s;
	return (ret);
}

void				Contact::printSummary(void) const
{
	std::cout << std::setw(10) << Contact::truncate(this->getFname()) << "|"
	<< std::setw(10) << Contact::truncate(this->getLname()) << "|"
	<< std::setw(10) << Contact::truncate(this->getNick()) << std::endl;
}

void				Contact::printCoord(void) const
{
	std::cout
	<< "First name: " << this->getFname() << std::endl
	<< "Last name: " << this->getLname() << std::endl
	<< "Nickname: " << this->getNick() << std::endl
	<< "Address: " << this->getAddr() << std::endl
	<< "Mail: " << this->getMail() << std::endl
	<< "Phone: " << this->getPhone() << std::endl
	<< "Birthday: " << this->getBday() << std::endl
	<< "Favorite meal: " << this->getMeal() << std::endl
	<< "Underwear color: " << this->getColor() << std::endl
	<< "Darkest secret: " << this->getSecret() << std::endl;
}
