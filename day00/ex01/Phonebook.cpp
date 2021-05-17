/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 09:05:47 by craffate          #+#    #+#             */
/*   Updated: 2021/05/17 13:41:44 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

unsigned int			Phonebook::_count = 0;

void					Phonebook::add(void)
{
	Contact				contact;
	std::string			line;

	if (7 < this->_count)
	{
		std::cout << "Cannot add additional contact" << std::endl;
		return;
	}
	std::cout << "First name: ";
	contact.askFname();
	std::cout << "Last name: ";
	contact.askLname();
	std::cout << "Nickname: ";
	contact.askNick();
	std::cout << "Login: ";
	contact.askLogin();
	std::cout << "Postal address: ";
	contact.askAddr();
	std::cout << "Email address: ";
	contact.askMail();
	std::cout << "Phone number: ";
	contact.askPhone();
	std::cout << "Birthday: ";
	contact.askBday();
	std::cout << "Favorite meal: ";
	contact.askMeal();
	std::cout << "Underwear color: ";
	contact.askColor();
	std::cout << "Darkest secret: ";
	contact.askSecret();
	this->_contacts[Phonebook::_count] = contact;
	Phonebook::_count += 1;
}

static int				isnumber(const std::string s)
{
	int					ret;
	unsigned int		idx;

	ret = 0;
	idx = -1u;
	while (!ret && 0 != s[++idx])
	{
		if (!isdigit(s[idx]))
			ret = 1;
	}
	return (ret);
}

void					Phonebook::search(void) const
{
	unsigned int		idx;
	std::string			line;

	idx = -1u;
	while (Phonebook::_count > ++idx)
	{
		std::cout << std::setw(10) << idx << "|";
		this->_contacts[idx].printSummary();
	}
	std::cout << "Please select an index:" << std::endl;
	std::cin >> line;
	if (!isnumber(line))
	{
		idx = std::stoi(line);
		std::cout << Phonebook::_count << std::endl;
		if (Phonebook::_count <= idx)
			std::cout << "Index out of range!" << std::endl;
		else
			this->_contacts[idx].printCoord();
	}
	else
		std::cout << "Please enter a valid index" << std::endl;
}
