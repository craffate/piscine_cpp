/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:04:29 by craffate          #+#    #+#             */
/*   Updated: 2021/05/26 13:23:23 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hp(100), _max_hp(100), _energy(100),
_max_energy(100), _level(1), _name(name), _melee(30), _ranged(20), _armor(5)
{
	std::cout << "Je m'appelle Trap, Clap" << " \"" << this->getName() << "\" "<< "Trap, zéro zéro Trap." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Mise en veille du ClapTrap !" << std::endl;
}

int					ClapTrap::getHp(void) const
{
	return (this->_hp);
}

void				ClapTrap::setHp(int const hp)
{
	this->_hp = hp;
}

unsigned int		ClapTrap::getMaxHp(void) const
{
	return (this->_max_hp);
}

void				ClapTrap::setMaxHp(unsigned int const max_hp)
{
	this->_max_hp = max_hp;
}

int					ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

void				ClapTrap::setEnergy(int const energy)
{
	this->_energy = energy;
}

unsigned int		ClapTrap::getMaxEnergy(void) const
{
	return (this->_max_energy);
}

void				ClapTrap::setMaxEnergy(unsigned int const max_energy)
{
	this->_max_energy = max_energy;
}

int					ClapTrap::getLevel(void) const
{
	return (this->_level);
}

void				ClapTrap::setLevel(int const level)
{
	this->_level = level;
}

std::string			ClapTrap::getName(void) const
{
	return (this->_name);
}

void				ClapTrap::setName(std::string const name)
{
	this->_name = name;
}

int					ClapTrap::getMelee(void) const
{
	return (this->_melee);
}

void				ClapTrap::setMelee(int const melee)
{
	this->_melee = melee;
}

int					ClapTrap::getRanged(void) const
{
	return (this->_ranged);
}

void				ClapTrap::setRanged(int const ranged)
{
	this->_ranged = ranged;
}

int					ClapTrap::getArmor(void) const
{
	return (this->_armor);
}

void				ClapTrap::setArmor(int const armor)
{
	this->_armor = armor;
}

void				ClapTrap::rangedAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "CL4P-TP " << this->getName() << " attaque " << target
		<< " à distance, causant " << this->getRanged() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "CL4P-TP " << this->getName() << " attaque " << target
		<< " à distance, causant théoriquement " << this->getRanged() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				ClapTrap::meleeAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "CL4P-TP " << this->getName() << " attaque " << target
		<< " au corps à corps, causant " << this->getMelee() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "CL4P-TP " << this->getName() << " essai d'attaquer " << target
		<< " au corps à corps, causant théoriquement " << this->getMelee() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				ClapTrap::takeDamage(unsigned int amount)
{
	int			damage;

	damage = (amount - this->getArmor());
	if (0 < this->getHp())
	{
		if (1 > damage)
		{
			std::cout << "CL4P-TP " << this->getName() << " ne se prend pas de points de dégâts !" << std::endl;
		}
		else
		{
			std::cout << "CL4P-TP " << this->getName() << " encaisse " << damage
			<< " points de dégâts !" << std::endl;
			if (1 > (this->getHp() - damage))
			{
				std::cout << "CL4P-TP " << this->getName() << " meurs de l'attaque !" << std::endl;
				this->setHp(0);
			}
			else
				this->setHp(this->getHp() - damage);
		}
	}
	else
	{
		std::cout << "CL4P-TP " << this->getName() << " ne se prend pas de point de dégâts, c'est normal ! Il est mort !" << std::endl;
	}
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	if (this->getMaxHp() < (this->getHp() + amount))
		heal = (this->getMaxHp() - this->getHp());
	else
		heal = amount;
	this->setHp(this->getHp() + heal);
	std::cout << "CL4P-TP " << this->getName() << " se soigne de " << heal
	<< " !" << std::endl;
}
