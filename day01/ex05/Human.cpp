/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:15:36 by craffate          #+#    #+#             */
/*   Updated: 2021/05/15 11:10:32 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

const Brain			&Human::getBrain(void) const
{
	return (this->_brain);
}

std::string			Human::identifier(void) const
{
	return (this->getBrain().identifier());
}
