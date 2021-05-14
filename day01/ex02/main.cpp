/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:12:34 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 12:29:32 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static void			spawnRandoms(ZombieEvent ze)
{
	Zombie			*zm;
	Zombie			*zm2;
	Zombie			*zm3;

	zm = ze.randomChump();
	zm->announce();
	zm->advert();
	delete zm;
	zm2 = ze.randomChump();
	zm2->announce();
	zm2->advert();
	delete zm2;
	zm3 = ze.randomChump();
	zm3->announce();
	zm3->advert();
	delete zm3;
}

static void			spawnMomerzou(ZombieEvent ze)
{
	Zombie			*zm;

	zm = ze.newZombie("momerzou");
	zm->announce();
	zm->advert();
}

int					main(void)
{
	int				ret;
	ZombieEvent		ze;

	ret = 0;
	ze.setZombieType("Mage");
	spawnMomerzou(ze);
	ze.setZombieType("Random");
	spawnRandoms(ze);
	return (ret);
}
