/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:16:43 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 12:49:43 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string			_name;
		const Weapon		*_weapon;

	public:
		HumanB(const std::string name);
		HumanB(const std::string name, Weapon weapon);
		~HumanB(void);

		const Weapon		*getWeapon(void) const;
		void				setWeapon(Weapon &weapon);

		void				attack(void) const;
};

#endif
