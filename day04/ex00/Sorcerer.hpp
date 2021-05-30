/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:34:12 by craffate          #+#    #+#             */
/*   Updated: 2021/05/30 11:08:37 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string			_name;
		std::string			_title;

	public:
		Sorcerer(void);
		Sorcerer(std::string const name, std::string const title);
		Sorcerer(Sorcerer const &s);
		~Sorcerer(void);

		Sorcerer			&operator=(Sorcerer const &s);

		std::string			getName(void) const;
		void				setName(std::string const name);

		std::string			getTitle(void) const;
		void				setTitle(std::string const title);

		void				polymorph(Victim const &v) const;
};

std::ostream				&operator<<(std::ostream &os, Sorcerer const &s);

#endif
