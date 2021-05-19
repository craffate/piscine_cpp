/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 08:47:57 by craffate          #+#    #+#             */
/*   Updated: 2021/05/19 09:15:09 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_raw;
		static int const	_bits = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &f);
		Fixed& operator= (Fixed const &f);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
