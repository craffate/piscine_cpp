/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:12:47 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 11:29:40 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string			_type;

	public:
		Weapon(const std::string type);
		~Weapon(void);

		const std::string	&getType(void) const;
		void				setType(const std::string type);
};


#endif
