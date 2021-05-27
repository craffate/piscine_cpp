/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:21:53 by craffate          #+#    #+#             */
/*   Updated: 2021/05/27 08:28:35 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap(void);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			ninjaShoebox(ClapTrap &ct);
		void			ninjaShoebox(FragTrap &ft);
		void			ninjaShoebox(ScavTrap &st);
		void			ninjaShoebox(NinjaTrap &nt);
		void			ninjaShoebox(SuperTrap &st);
		void			vaulthunter_dot_exe(std::string const &target);
};

#endif
