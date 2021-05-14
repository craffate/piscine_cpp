/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:51:10 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 16:54:35 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int					main(void)
{
	int				ret;
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr;
	std::string		&ref = str;

	ret = 0;
	ptr = &str;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (ret);
}
