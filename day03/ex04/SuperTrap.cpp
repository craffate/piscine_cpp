/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:21:27 by craffate          #+#    #+#             */
/*   Updated: 2021/05/27 08:25:47 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->setHp(this->FragTrap::getHp());
	this->setMaxHp(this->FragTrap::getMaxHp());
	this->setEnergy(this->NinjaTrap::getEnergy());
	this->setMaxEnergy(this->NinjaTrap::getMaxEnergy());
	this->setLevel(1);
	this->setName(name);
	this->setMelee(this->NinjaTrap::getMelee());
	this->setRanged(this->FragTrap::getRanged());
	this->setArmor(this->FragTrap::getArmor());
	std::cout << "Je m'appelle Trap, Ninja" << " \"" << this->getName() << "\" "<< "Trap, zéro zéro Trap." << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Mise en veille du SuperTrap !" << std::endl;
}

void				SuperTrap::rangedAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "SUP3R-TP " << this->getName() << " attaque " << target
		<< " à distance, causant " << this->getRanged() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "SUP3R-TP " << this->getName() << " attaque " << target
		<< " à distance, causant théoriquement " << this->getRanged() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				SuperTrap::meleeAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "SUP3R-TP " << this->getName() << " attaque " << target
		<< " au corps à corps, causant " << this->getMelee() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "SUP3R-TP " << this->getName() << " essai d'attaquer " << target
		<< " au corps à corps, causant théoriquement " << this->getMelee() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				SuperTrap::takeDamage(unsigned int amount)
{
	int			damage;

	damage = (amount - this->getArmor());
	if (0 < this->getHp())
	{
		if (1 > damage)
		{
			std::cout << "SUP3R-TP " << this->getName() << " ne se prend pas de points de dégâts !" << std::endl;
		}
		else
		{
			std::cout << "SUP3R-TP " << this->getName() << " encaisse " << damage
			<< " points de dégâts !" << std::endl;
			if (1 > (this->getHp() - damage))
			{
				std::cout << "SUP3R-TP " << this->getName() << " meurs de l'attaque !" << std::endl;
				this->setHp(0);
			}
			else
				this->setHp(this->getHp() - damage);
		}
	}
	else
	{
		std::cout << "SUP3R-TP " << this->getName() << " ne se prend pas de point de dégâts, c'est normal ! Il est mort !" << std::endl;
	}
}

void				SuperTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	if (this->getMaxHp() < (this->getHp() + amount))
		heal = (this->getMaxHp() - this->getHp());
	else
		heal = amount;
	this->setHp(this->getHp() + heal);
	std::cout << "SUP3R-TP " << this->getName() << " se soigne de " << heal
	<< " !" << std::endl;
}

void				SuperTrap::ninjaShoebox(ClapTrap &ct)
{
	std::cout << "SUP3R-TP " << this->getName() << " utilise son attaque spéciale sur le ClapTrap " << ct.getName()
	<< " !" << std::endl;
}

void				SuperTrap::ninjaShoebox(FragTrap &ft)
{
	std::cout << "SUP3R-TP " << this->getName() << " utilise son attaque spéciale sur le FragTrap " << ft.getName()
	<< " !" << std::endl;
}

void				SuperTrap::ninjaShoebox(ScavTrap &st)
{
	std::cout << "SUP3R-TP " << this->getName() << " utilise son attaque spéciale sur le ScavTrap " << st.getName()
	<< " !" << std::endl;
}

void				SuperTrap::ninjaShoebox(NinjaTrap &nt)
{
	std::cout << "SUP3R-TP " << this->getName() << " utilise son attaque spéciale sur le NinjaTrap " << nt.getName()
	<< " !" << std::endl;
}

void				SuperTrap::ninjaShoebox(SuperTrap &st)
{
	std::cout << "SUP3R-TP " << this->getName() << " utilise son attaque spéciale sur le SuperTrap " << st.getName()
	<< " !" << std::endl;
}

void				SuperTrap::vaulthunter_dot_exe(std::string const &target)
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
			std::cout << "SUP3R-TP " << this->getName() << " veut lancer l'attaque \"" << attacks[std::rand() % 5] << "\" sur "
			<< target << " mais il n'a plus assez d'énergie !" << std::endl;
		}
		else
		{
			std::cout << "SUP3R-TP " << this->getName() << " lance l'attaque \"" << attacks[std::rand() % 5] << "\" sur "
			<< target << " !" << std::endl;
			this->setEnergy(this->getEnergy() - 25);
		}
	}
	else
	{
		std::cout << "SUP3R-TP " << this->getName() << " veut lancer l'attaque \"" << attacks[std::rand() % 5] << "\" sur "
		<< target << " mais il est mort !" << std::endl;
	}
}
