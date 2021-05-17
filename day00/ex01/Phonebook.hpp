/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 09:16:09 by craffate          #+#    #+#             */
/*   Updated: 2021/05/17 13:43:15 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <locale>

class Phonebook
{
	private:
		Contact				_contacts[8];
		static unsigned int	_count;
	
	public:
		Phonebook(void);
		~Phonebook(void);
		void				add(void);
		void				search(void) const;
};

#endif
