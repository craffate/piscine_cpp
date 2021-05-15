/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:57:09 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 10:30:20 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class Brain
{
	private:
		bool				_alive;
		unsigned int		_mass;
		unsigned long		_neurons;

	public:
		Brain(void);
		~Brain(void);

		bool				getStatus(void) const;
		unsigned int		getMass(void) const;
		unsigned long		getNeurons(void) const;
		std::string			identifier(void) const;
};

#endif
