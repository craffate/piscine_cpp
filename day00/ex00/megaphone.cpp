/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 07:46:48 by craffate          #+#    #+#             */
/*   Updated: 2021/05/13 08:37:50 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int							main(int ac, char **av)
{
	int						idx;
	std::string::size_type	idx2;
	std::string				s;
	std::locale				l;

	idx = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (++idx < ac)
		{
			s = av[idx];
			idx2 = -1;
			while (++idx2 < s.length())
			{
				std::cout << std::toupper(s[idx2], l);
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
