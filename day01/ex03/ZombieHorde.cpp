/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:43:41 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 16:22:07 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const unsigned int hordeSize) : _hordeSize(hordeSize)
{
	std::string								zmName;
	unsigned int							idx;

	srand(time(NULL));
	idx = -1u;
	this->_horde = new Zombie[hordeSize];
	while (hordeSize > ++idx)
	{
		zmName = "Horde Zombie #" + std::to_string(rand() % (1000 + hordeSize));
		this->_horde[idx] = Zombie("Horde", zmName);
	}
}

ZombieHorde::~ZombieHorde(void)
{
}

void						ZombieHorde::announce(void) const
{
	unsigned int			idx;

	idx = -1u;
	while (this->_hordeSize > ++idx)
		this->_horde[idx].announce();
}
