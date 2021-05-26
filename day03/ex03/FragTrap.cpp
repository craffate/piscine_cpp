/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:09:05 by craffate          #+#    #+#             */
/*   Updated: 2021/05/26 13:22:03 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
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
	std::cout << "Je m'appelle Trap, Frag" << " \"" << this->getName() << "\" "<< "Trap, zéro zéro Trap." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Mise en veille du FragTrap !" << std::endl;
}

void				FragTrap::rangedAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "FR4G-TP " << this->getName() << " attaque " << target
		<< " à distance, causant " << this->getRanged() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->getName() << " attaque " << target
		<< " à distance, causant théoriquement " << this->getRanged() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				FragTrap::meleeAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "FR4G-TP " << this->getName() << " attaque " << target
		<< " au corps à corps, causant " << this->getMelee() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->getName() << " essai d'attaquer " << target
		<< " au corps à corps, causant théoriquement " << this->getMelee() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				FragTrap::takeDamage(unsigned int amount)
{
	int			damage;

	damage = (amount - this->getArmor());
	if (0 < this->getHp())
	{
		if (1 > damage)
		{
			std::cout << "FR4G-TP " << this->getName() << " ne se prend pas de points de dégâts !" << std::endl;
		}
		else
		{
			std::cout << "FR4G-TP " << this->getName() << " encaisse " << damage
			<< " points de dégâts !" << std::endl;
			if (1 > (this->getHp() - damage))
			{
				std::cout << "FR4G-TP " << this->getName() << " meurs de l'attaque !" << std::endl;
				this->setHp(0);
			}
			else
				this->setHp(this->getHp() - damage);
		}
	}
	else
	{
		std::cout << "FR4G-TP " << this->getName() << " ne se prend pas de point de dégâts, c'est normal ! Il est mort !" << std::endl;
	}
}

void				FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	if (this->getMaxHp() < (this->getHp() + amount))
		heal = (this->getMaxHp() - this->getHp());
	else
		heal = amount;
	this->setHp(this->getHp() + heal);
	std::cout << "FR4G-TP " << this->getName() << " se soigne de " << heal
	<< " !" << std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	static std::string	attacks[5] = { "Spray and Pray", "Danse Ennuyeuse", "Monologue Interminable", "Antenne Dans l'Oeil", "Beatbox Insupportable" };
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
			std::cout << "FR4G-TP " << this->getName() << " veut lancer l'attaque \"" << attacks[std::rand() % 5] << "\" sur "
			<< target << " mais il n'a plus assez d'énergie !" << std::endl;
		}
		else
		{
			std::cout << "FR4G-TP " << this->getName() << " lance l'attaque \"" << attacks[std::rand() % 5] << "\" sur "
			<< target << " !" << std::endl;
			this->setEnergy(this->getEnergy() - 25);
		}
	}
	else
	{
		std::cout << "FR4G-TP " << this->getName() << " veut lancer l'attaque \"" << attacks[std::rand() % 5] << "\" sur "
		<< target << " mais il est mort !" << std::endl;
	}
}
