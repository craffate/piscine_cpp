/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 09:18:24 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 09:49:55 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	private:
		unsigned int	_size;
		unsigned int	_weight;
		std::string		_color;

	public:
		Pony(void);
		Pony(unsigned int size, unsigned int weight, std::string color);
		~Pony(void);
		unsigned int	getSize(void) const;
		unsigned int	getWeight(void) const;
		std::string		getColor(void) const;
		void			printPony(void) const;
};

#endif
