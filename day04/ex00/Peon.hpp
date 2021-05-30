/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:15:31 by craffate          #+#    #+#             */
/*   Updated: 2021/05/30 11:36:26 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		std::string			_name;

	public:
		Peon(void);
		Peon(std::string const name);
		Peon(Peon const &p);
		~Peon(void);

		Peon				&operator=(Peon const &p);

		void				getPolymorphed(void) const;
};

#endif
