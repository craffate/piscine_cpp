/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:15:48 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 11:10:36 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
	private:
		const Brain		_brain;

	public:
		Human(void);
		~Human(void);

		const Brain		&getBrain(void) const;
		std::string		identifier(void) const;
};

#endif
