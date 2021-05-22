/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:04:25 by craffate          #+#    #+#             */
/*   Updated: 2021/05/22 17:54:04 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
	private:
		int				_hp;
		unsigned int	_max_hp;
		int				_energy;
		unsigned int	_max_energy;
		int				_level;
		std::string		_name;
		int				_melee;
		int				_ranged;
		int				_armor;

	public:
		FragTrap(std::string name);
		~FragTrap(void);

		int				getHp(void) const;
		void			setHp(int const hp);

		unsigned int	getMaxHp(void) const;
		void			setMaxHp(unsigned int const max_hp);

		int				getEnergy(void) const;
		void			setEnergy(int const energy);

		unsigned int	getMaxEnergy(void) const;
		void			setMaxEnergy(unsigned int const max_energy);

		int				getLevel(void) const;
		void			setLevel(int const level);

		std::string		getName(void) const;
		void			setName(std::string const name);

		int				getMelee(void) const;
		void			setMelee(int const melee);

		int				getRanged(void) const;
		void			setRanged(int const ranged);

		int				getArmor(void) const;
		void			setArmor(int const armor);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
