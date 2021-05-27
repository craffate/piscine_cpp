/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:59:38 by craffate          #+#    #+#             */
/*   Updated: 2021/05/26 14:14:37 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->setHp(60);
	this->setMaxHp(60);
	this->setEnergy(120);
	this->setMaxEnergy(120);
	this->setLevel(1);
	this->setName(name);
	this->setMelee(60);
	this->setRanged(5);
	this->setArmor(0);
	std::cout << "Je m'appelle Trap, Ninja" << " \"" << this->getName() << "\" "<< "Trap, zéro zéro Trap." << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Mise en veille du NinjaTrap !" << std::endl;
}

void				NinjaTrap::rangedAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "N1NJ4-TP " << this->getName() << " attaque " << target
		<< " à distance, causant " << this->getRanged() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "N1NJ4-TP " << this->getName() << " attaque " << target
		<< " à distance, causant théoriquement " << this->getRanged() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				NinjaTrap::meleeAttack(std::string const &target)
{
	if (0 < this->getHp())
	{
		std::cout << "N1NJ4-TP " << this->getName() << " attaque " << target
		<< " au corps à corps, causant " << this->getMelee() << " points de dégâts !" << std::endl;
	}
	else
	{
		std::cout << "N1NJ4-TP " << this->getName() << " essai d'attaquer " << target
		<< " au corps à corps, causant théoriquement " << this->getMelee() << " points de dégâts mais il est mort !" << std::endl;
	}
}

void				NinjaTrap::takeDamage(unsigned int amount)
{
	int			damage;

	damage = (amount - this->getArmor());
	if (0 < this->getHp())
	{
		if (1 > damage)
		{
			std::cout << "N1NJ4-TP " << this->getName() << " ne se prend pas de points de dégâts !" << std::endl;
		}
		else
		{
			std::cout << "N1NJ4-TP " << this->getName() << " encaisse " << damage
			<< " points de dégâts !" << std::endl;
			if (1 > (this->getHp() - damage))
			{
				std::cout << "N1NJ4-TP " << this->getName() << " meurs de l'attaque !" << std::endl;
				this->setHp(0);
			}
			else
				this->setHp(this->getHp() - damage);
		}
	}
	else
	{
		std::cout << "N1NJ4-TP " << this->getName() << " ne se prend pas de point de dégâts, c'est normal ! Il est mort !" << std::endl;
	}
}

void				NinjaTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	if (this->getMaxHp() < (this->getHp() + amount))
		heal = (this->getMaxHp() - this->getHp());
	else
		heal = amount;
	this->setHp(this->getHp() + heal);
	std::cout << "N1NJ4-TP " << this->getName() << " se soigne de " << heal
	<< " !" << std::endl;
}

void				NinjaTrap::ninjaShoebox(ClapTrap &ct)
{
	std::cout << "N1NJ4-TP " << this->getName() << " utilise son attaque spéciale sur le ClapTrap " << ct.getName()
	<< " !" << std::endl;
}

void				NinjaTrap::ninjaShoebox(FragTrap &ft)
{
	std::cout << "N1NJ4-TP " << this->getName() << " utilise son attaque spéciale sur le FragTrap " << ft.getName()
	<< " !" << std::endl;
}

void				NinjaTrap::ninjaShoebox(ScavTrap &st)
{
	std::cout << "N1NJ4-TP " << this->getName() << " utilise son attaque spéciale sur le ScavTrap " << st.getName()
	<< " !" << std::endl;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &nt)
{
	std::cout << "N1NJ4-TP " << this->getName() << " utilise son attaque spéciale sur le NinjaTrap " << nt.getName()
	<< " !" << std::endl;
}
