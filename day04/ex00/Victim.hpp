/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:00:12 by craffate          #+#    #+#             */
/*   Updated: 2021/05/30 11:35:59 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	private:
		std::string			_name;

	public:
		Victim(void);
		Victim(std::string const name);
		Victim(Victim const &v);
		~Victim(void);

		Victim				&operator=(Victim const &s);

		std::string			getName(void) const;
		void				setName(std::string const name);

		virtual void		getPolymorphed(void) const;
};

std::ostream				&operator<<(std::ostream &os, Victim const &v);

#endif
