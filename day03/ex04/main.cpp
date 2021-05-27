/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 08:09:52 by craffate          #+#    #+#             */
/*   Updated: 2021/05/27 08:24:45 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int				main(void)
{
	int			ret;
	FragTrap	*ft;
	ScavTrap	*st;
	ClapTrap	*ct;
	NinjaTrap	*nt;
	SuperTrap	*supt;

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

	ct = new ClapTrap("ct");
	ct->meleeAttack("Minion 1");
	ct->takeDamage(10);
	ct->rangedAttack("True last boss");
	ct->takeDamage(95);
	ct->beRepaired(3000);
	ct->takeDamage(1000);
	ct->meleeAttack("True last boss");
	ct->rangedAttack("True last boss");

	nt = new NinjaTrap("nt");
	nt->meleeAttack("Minion 1");
	nt->takeDamage(10);
	nt->rangedAttack("True last boss");
	nt->takeDamage(95);
	nt->beRepaired(3000);
	nt->takeDamage(1000);
	nt->meleeAttack("True last boss");
	nt->rangedAttack("True last boss");
	nt->ninjaShoebox(*ft);
	nt->ninjaShoebox(*st);
	nt->ninjaShoebox(*ct);
	nt->ninjaShoebox(*nt);

	supt = new SuperTrap("supt");
	supt->meleeAttack("Minion 1");
	supt->takeDamage(10);
	supt->rangedAttack("True last boss");
	supt->takeDamage(95);
	supt->beRepaired(3000);
	supt->takeDamage(1000);
	supt->meleeAttack("True last boss");
	supt->rangedAttack("True last boss");
	supt->ninjaShoebox(*ft);
	supt->ninjaShoebox(*st);
	supt->ninjaShoebox(*ct);
	supt->ninjaShoebox(*nt);
	supt->ninjaShoebox(*supt);
	return (ret);
}
