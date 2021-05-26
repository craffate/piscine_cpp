/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:08:30 by craffate          #+#    #+#             */
/*   Updated: 2021/05/26 13:21:51 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHp(100);
	this->setMaxHp(100);
	this->setEnergy(100);
	this->setMaxEnergy(100);
	this->setLevel(1);
	this->setName(name);
	this->setMelee(30);
	this->setRanged(20);
	this->setArmor(5);
	std::cout << "Je m'appelle Trap, Scav" << " \"" << this->getName() << "\" "<< "Trap, zéro zéro Trap." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Mise en veille du ScavTrap !" << std::endl;
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
