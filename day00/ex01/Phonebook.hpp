/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 09:16:09 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 08:07:17 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact				_contacts[7];
		static unsigned int	_count;
	
	public:
		Phonebook(void);
		~Phonebook(void);
		void				add(void);
		void				search(void) const;
};

#endif
