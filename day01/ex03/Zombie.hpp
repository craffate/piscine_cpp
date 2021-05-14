/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:33:42 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 12:15:32 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string			_type;
		std::string			_name;
		static unsigned int	_count;

	public:
		Zombie(void);
		Zombie(std::string name);
		Zombie(std::string type, std::string name);
		~Zombie(void);

		std::string			getType(void) const;
		void				setType(std::string type);

		std::string			getName(void) const;
		void				setName(std::string name);

		void				advert(void) const;
		void				announce(void) const;
};

#endif
