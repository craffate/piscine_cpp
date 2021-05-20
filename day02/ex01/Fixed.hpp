/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 08:47:57 by craffate          #+#    #+#             */
/*   Updated: 2021/05/20 15:56:04 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <ostream>
# include <cmath>

class Fixed
{
	private:
		int					_raw;
		static int const	_bits = 8;

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed(void);
		Fixed(Fixed const &f);

		Fixed&				operator=(Fixed const &f);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream&		operator<<(std::ostream &os, Fixed const &f);

#endif
