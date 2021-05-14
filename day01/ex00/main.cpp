/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 09:20:43 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 09:53:15 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void			ponyOnTheStack(void)
{
	Pony		pony;
	std::cout << "ponyOnTheStack() entered!" << std::endl;
	pony.printPony();
	std::cout << "Exiting ponyOnTheStack()..." << std::endl;
}

void			ponyOnTheHeap(void)
{
	Pony		*pony;
	
	pony = new Pony(12, 21, "white");
	pony->printPony();
	delete pony;
	std::cout << "Exiting ponyOnTheHeap()..." << std::endl;
}

int				main(void)
{
	int			ret;

	ret = 0;
	std::cout << "Entering ponyOnTheStack()" << std::endl
	<< "--------------------" << std::endl;
	ponyOnTheStack();
	std::cout << "ponyOnTheStack() done" << std::endl
	<< "--------------------" << std::endl;

	std::cout << "Entering ponyOnTheHeap()" << std::endl
	<< "--------------------" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheHeap() done" << std::endl
	<< "--------------------" << std::endl;
	return (ret);
}
