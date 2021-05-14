/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:16:47 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 16:21:51 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int					main(void)
{
	int				ret;
	ZombieHorde		*zh;

	ret = 0;
	zh = new ZombieHorde(3);
	zh->announce();
	return (ret);
}
