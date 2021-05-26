/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 08:09:52 by craffate          #+#    #+#             */
/*   Updated: 2021/05/26 09:15:52 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int				main(void)
{
	int			ret;
	FragTrap	*ft;

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
	return (ret);
}
