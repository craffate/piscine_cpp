/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:48:57 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 12:15:03 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <chrono>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string			_type;

	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		std::string			getZombieType(void) const;
		void				setZombieType(std::string type);

		Zombie				*newZombie(std::string name);
		Zombie				*randomChump(void);
};

#endif
