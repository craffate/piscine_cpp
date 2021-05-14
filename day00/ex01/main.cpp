/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 10:18:04 by craffate          #+#    #+#             */
/*   Updated: 2021/05/13 14:53:35 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <iomanip>
# include "Phonebook.hpp"

int						main(void)
{
	int					ret;
	std::string			line;
	Phonebook			phonebook;

	ret = 0;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (0 == ret)
	{
		std::cout << "Please enter a command:" << std::endl;
		std::cin >> line;
		if (0 == line.compare("ADD"))
			phonebook.add();
		else if (0 == line.compare("SEARCH"))
			phonebook.search();
		else if (0 == line.compare("EXIT"))
			ret = 1;
	}
	return (ret);
}
