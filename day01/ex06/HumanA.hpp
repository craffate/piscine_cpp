/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:14:47 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 12:45:22 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string			_name;
		const Weapon		&_weapon;

	public:
		HumanA(const std::string name, const Weapon &weapon);
		~HumanA(void);

		void				attack(void) const;
};

#endif
