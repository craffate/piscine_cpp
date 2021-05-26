/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 08:09:52 by craffate          #+#    #+#             */
/*   Updated: 2021/05/26 10:47:04 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int				main(void)
{
	int			ret;
	FragTrap	*ft;
	ScavTrap	*st;

	ret = 0;
	ft = new FragTrap("ft");
	ft->meleeAttack("Minion 1");
	ft->takeDamage(10);
	ft->rangedAttack("True last boss");
	ft->takeDamage(95);
	ft->beRepaired(3000);
	ft->vaulthunter_dot_exe("True last boss");
	ft->vaulthunter_dot_exe("True last boss");
	ft->vaulthunter_dot_exe("True last boss");
	ft->vaulthunter_dot_exe("True last boss");
	ft->vaulthunter_dot_exe("True last boss");
	ft->takeDamage(1000);
	ft->meleeAttack("True last boss");
	ft->rangedAttack("True last boss");
	delete ft;

	st = new ScavTrap("st");
	st->meleeAttack("Minion 1");
	st->takeDamage(10);
	st->rangedAttack("True last boss");
	st->takeDamage(95);
	st->beRepaired(3000);
	st->challengeNewcomer("True last boss");
	st->challengeNewcomer("True last boss");
	st->challengeNewcomer("True last boss");
	st->challengeNewcomer("True last boss");
	st->challengeNewcomer("True last boss");
	st->takeDamage(1000);
	st->meleeAttack("True last boss");
	st->rangedAttack("True last boss");
	delete st;
	return (ret);
}
