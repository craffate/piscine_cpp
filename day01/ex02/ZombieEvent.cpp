/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:48:27 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 12:16:37 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}

ZombieEvent::~ZombieEvent(void)
{
}

std::string									ZombieEvent::getZombieType(void) const
{
	return (this->_type);
}

void										ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie										*ZombieEvent::newZombie(std::string name)
{
	Zombie									*ret;

	ret = new Zombie(this->getZombieType(), name);
	return (ret);
}

Zombie										*ZombieEvent::randomChump(void)
{
	Zombie									*ret;
	std::chrono::system_clock::time_point	tp;
	std::chrono::system_clock::duration		dtn;

	tp = std::chrono::system_clock::now();
	dtn = tp.time_since_epoch();
	ret = newZombie("Random chump #" + std::to_string(dtn.count()));
	return (ret);
}

