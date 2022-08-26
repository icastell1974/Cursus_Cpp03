/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:26:21 by icastell          #+#    #+#             */
/*   Updated: 2022/08/26 20:15:58 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("") 
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old_ScavTrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = old_ScavTrap;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &old_ScavTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = old_ScavTrap.getName();
	this->Hitpoints = old_ScavTrap.getHitPoints();
	this->Energy_points = old_ScavTrap.getEnergyPoints();
	this->Attack_damage = old_ScavTrap.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target
			<< " causing " << this->getAttackDamage()
			<< " points of damage" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode" << std::endl;
}
