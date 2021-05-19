/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:56:06 by craffate          #+#    #+#             */
/*   Updated: 2021/05/19 07:48:18 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <sstream>
#include <cstring>

int						main(int ac, char **av)
{
	int					ret;
	std::ifstream		ifs;
	std::ofstream		ofs;
	std::stringstream	ss;
	std::string			fstr;
	std::string			filename;
	size_t				pos;

	ret = 0;
	if (4 != ac)
	{
		ret = 1;
		std::cout << "usage: replace filename s1 s2" << std::endl;
	}
	if (0 == ret)
	{
		ifs.open(av[1], std::ifstream::in);
		if (ifs.good())
		{
			ss << ifs.rdbuf();
			fstr = ss.str();

			pos = 0;
			while (std::string::npos != (pos = fstr.find(av[2])))
				fstr.replace(pos, strlen(av[2]), av[3]);
			filename.append(av[1]);
			filename.append(".replace");
			ofs.open(filename, std::ofstream::out);
			ofs << fstr;
		}
		else
			std::cout << "Could not open file " << av[1] << std::endl;
	}
	ifs.close();
	ofs.close();
	return (ret);
}
