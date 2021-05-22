/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:09:05 by craffate          #+#    #+#             */
/*   Updated: 2021/05/22 17:54:20 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _hp(100), _max_hp(100), _energy(100),
_max_energy(100), _level(1), _name(name), _melee(30), _ranged(20), _armor(5)
{
	std::cout << "Constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

int					FragTrap::getHp(void) const
{
	return (this->_hp);
}

void				FragTrap::setHp(int const hp)
{
	this->_hp = hp;
}

unsigned int		FragTrap::getMaxHp(void) const
{
	return (this->_max_hp);
}

void				FragTrap::setMaxHp(unsigned int const max_hp)
{
	this->_max_hp = max_hp;
}

int					FragTrap::getEnergy(void) const
{
	return (this->_energy);
}

void				FragTrap::setEnergy(int const energy)
{
	this->_energy = energy;
}

unsigned int		FragTrap::getMaxEnergy(void) const
{
	return (this->_max_energy);
}

void				FragTrap::setMaxEnergy(unsigned int const max_energy)
{
	this->_max_energy = max_energy;
}

int					FragTrap::getLevel(void) const
{
	return (this->_level);
}

void				FragTrap::setLevel(int const level)
{
	this->_level = level;
}

std::string			FragTrap::getName(void) const
{
	return (this->_name);
}

void				FragTrap::setName(std::string const name)
{
	this->_name = name;
}

int					FragTrap::getMelee(void) const
{
	return (this->_melee);
}

void				FragTrap::setMelee(int const melee)
{
	this->_melee = melee;
}

int					FragTrap::getRanged(void) const
{
	return (this->_ranged);
}

void				FragTrap::setRanged(int const ranged)
{
	this->_ranged = ranged;
}

int					FragTrap::getArmor(void) const
{
	return (this->_armor);
}

void				FragTrap::setArmor(int const armor)
{
	this->_armor = armor;
}

void				FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attaque " << target
	<< " à distance, causant " << this->_ranged << " points de dégâts !" << std::endl;
}

void				FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attaque " << target
	<< " au corps à corps, causant " << this->_ranged << " points de dégâts !" << std::endl;
}

void				FragTrap::takeDamage(unsigned int amount)
{
	int			damage;

	damage = (amount - this->getArmor());
	if (1 > damage)
	{
		std::cout << "FR4G-TP " << this->getName() << " ne se prend pas de points de dégâts !";
	}
	else
	{
		std::cout << "FR4G-TP " << this->getName() << " encaisse " << amount
		<< " points de dégâts !" << std::endl;
		this->setHp(this->getHp() - damage);
	}
}

void				FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	if (this->getMaxHp() > (this->getHp() + amount))
		heal = (this->getMaxHp() - this->getHp());
	else
		heal = amount;
	this->setHp(this->getHp() + heal);
	std::cout << "FR4G-TP " << this->getName() << " se soigne de " << heal
	<< " !" << std::endl;
}
