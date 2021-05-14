/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 09:29:10 by craffate          #+#    #+#             */
/*   Updated: 2021/05/14 08:40:19 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string			_fname;
		std::string			_lname;
		std::string			_nick;
		std::string			_login;
		std::string			_addr;
		std::string			_mail;
		std::string			_phone;
		std::string			_bday;
		std::string			_meal;
		std::string			_color;
		std::string			_secret;
	
	public:
		Contact(void);
		~Contact(void);

		std::string			getFname(void) const;
		void				setFname(std::string fname);
		void				askFname(void);

		std::string			getLname(void) const;
		void				setLname(std::string lname);
		void				askLname(void);

		std::string			getNick(void) const;
		void				setNick(std::string nick);
		void				askNick(void);

		std::string			getLogin(void) const;
		void				setLogin(std::string login);
		void				askLogin(void);

		std::string			getAddr(void) const;
		void				setAddr(std::string addr);
		void				askAddr(void);

		std::string			getMail(void) const;
		void				setMail(std::string mail);
		void				askMail(void);

		std::string			getPhone(void) const;
		void				setPhone(std::string phone);
		void				askPhone(void);

		std::string			getBday(void) const;
		void				setBday(std::string bday);
		void				askBday(void);

		std::string			getMeal(void) const;
		void				setMeal(std::string meal);
		void				askMeal(void);

		std::string			getColor(void) const;
		void				setColor(std::string color);
		void				askColor(void);

		std::string			getSecret(void) const;
		void				setSecret(std::string sec);
		void				askSecret(void);

		void				printSummary(void) const;
		void				printCoord(void) const;

		static std::string	truncate(const std::string s);
};

#endif
