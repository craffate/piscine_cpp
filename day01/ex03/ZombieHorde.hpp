/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:43:52 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 16:20:08 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie				*_horde;
		unsigned int		_hordeSize;

	public:
		ZombieHorde(const unsigned int hordeSize);
		~ZombieHorde(void);

		void				announce(void) const;
};

#endif
