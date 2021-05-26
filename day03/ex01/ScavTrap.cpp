/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:08:30 by craffate          #+#    #+#             */
/*   Updated: 2021/05/26 13:01:09 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _hp(100), _max_hp(100), _energy(50),
_max_energy(50), _level(1), _name(name), _melee(20), _ranged(15), _armor(3)
{
	std::cout << "Je m'appelle Trap, Scav" << " \"" << this->getName() << "\" "<< "Trap, zéro zéro Trap." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Mise en veille !" << std::endl;
}

int					ScavTrap::getHp(void) const
{
	return (this->_hp);
}

void				ScavTrap::setHp(int const hp)
{
	this->_hp = hp;
}

unsigned int		ScavTrap::getMaxHp(void) const
{
	return (this->_max_hp);
}

void				ScavTrap::setMaxHp(unsigned int const max_hp)
{
	this->_max_hp = max_hp;
}

int					ScavTrap::getEnergy(void) const
{
	return (this->_energy);
}

void				ScavTrap::setEnergy(int const energy)
{
	this->_energy = energy;
}

unsigned int		ScavTrap::getMaxEnergy(void) const
{
	return (this->_max_energy);
}

void				ScavTrap::setMaxEnergy(unsigned int const max_energy)
{
	this->_max_energy = max_energy;
}

int					ScavTrap::getLevel(void) const
{
	return (this->_level);
}

void				ScavTrap::setLevel(int const level)
{
	this->_level = level;
}

std::string			ScavTrap::getName(void) const
{
	return (this->_name);
}

void				ScavTrap::setName(std::string const name)
{
	this->_name = name;
}

int					ScavTrap::getMelee(void) const
{
	return (this->_melee);
}

void				ScavTrap::setMelee(int const melee)
{
	this->_melee = melee;
}

int					ScavTrap::getRanged(void) const
{
	return (this->_ranged);
}

void				ScavTrap::setRanged(int const ranged)
{
	this->_ranged = ranged;
}

int					ScavTrap::getArmor(void) const
{
	return (this->_armor);
}

void				ScavTrap::setArmor(int const armor)
{
	this->_armor = armor;
}

void				ScavTrap::rangedAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "SC4V-TP " << this->getName() << " attaque " << target
		<< " de loin, causant " << this->getRanged() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << this->getName() << " attaque " << target
		<< " de loin, causant théoriquement " << this->getRanged() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				ScavTrap::meleeAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "SC4V-TP " << this->getName() << " attaque " << target
		<< " en mélée, causant " << this->getMelee() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << this->getName() << " essai d'attaquer " << target
		<< "  en mélée, causant théoriquement " << this->getMelee() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				ScavTrap::takeDamage(unsigned int amount)
{
	int			damage;

	damage = (amount - this->getArmor());
	if (0 < this->getHp())
	{
		if (1 > damage)
		{
			std::cout << "SC4V-TP " << this->getName() << " ne se prend pas de points de dégâts !" << std::endl;
		}
		else
		{
			std::cout << "SC4V-TP " << this->getName() << " encaisse " << damage
			<< " points de dégâts !" << std::endl;
			if (1 > (this->getHp() - damage))
			{
				std::cout << "SC4V-TP " << this->getName() << " meurs de l'attaque !" << std::endl;
				this->setHp(0);
			}
			else
				this->setHp(this->getHp() - damage);
		}
	}
	else
	{
		std::cout << "SC4V-TP " << this->getName() << " ne se prend pas de point de dégâts, c'est normal ! Il est mort !" << std::endl;
	}
}

void				ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	if (this->getMaxHp() < (this->getHp() + amount))
		heal = (this->getMaxHp() - this->getHp());
	else
		heal = amount;
	this->setHp(this->getHp() + heal);
	std::cout << "SC4V-TP " << this->getName() << " se soigne de " << heal
	<< " !" << std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const &target)
{
	static std::string	chall[5] = { "Shifumi", "1v1 Gare du Nord", "Match de Quidditch", "Combat de Pince", "Nettoyage de Cluster avec une brosse à dents" };
	static unsigned int	seed = 0;
	
	if (5 == seed)
		seed = 0;
	else
		seed += 1;
	std::srand(std::time(nullptr) + seed);
	if (0 <  this->getHp())
	{
		if (0 > (this->getEnergy() - 25))
		{
			std::cout << "SC4V-TP " << this->getName() << " veut défier " << target << " dans un \"" << chall[std::rand() % 5] << "\" "
			<< "mais il n'a plus assez d'énergie !" << std::endl;
		}
		else
		{
			std::cout << "SC4V-TP " << this->getName() << " défi " << target << " dans un \"" << chall[std::rand() % 5] << "\" "
			<< std::endl;
			this->setEnergy(this->getEnergy() - 25);
		}
	}
	else
	{
		std::cout << "SC4V-TP " << this->getName() << " veut défier " << target << " dans un \"" << chall[std::rand() % 5] << "\" "
		<< "mais il est mort !" << std::endl;
	}
}
