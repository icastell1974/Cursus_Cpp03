/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:40:57 by icastell          #+#    #+#             */
/*   Updated: 2022/11/03 16:22:39 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_ClapTrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = old_ClapTrap;
}

ClapTrap& ClapTrap::operator = (ClapTrap const &old_ClapTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = old_ClapTrap.getName();
	this->Hitpoints = old_ClapTrap.getHitPoints();
	this->Energy_points = old_ClapTrap.getEnergyPoints();
	this->Attack_damage = old_ClapTrap.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->Hitpoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->Energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->Attack_damage);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target
			<< " causing " << this->getAttackDamage()
			<< " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Energy_points -= amount;
	if (this->Energy_points <= 0)
		std::cout << this->getName() << " is dead" << std::endl;
	else
		std::cout << this->getName() << " has been damaged "
				<< "and now it has " << this->getEnergyPoints()
				<< " energy points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Energy_points += amount;
	std::cout << this->getName() << " has been repaired "
			<<"and now it has " << this->getEnergyPoints()
			<<" energy points" << std::endl;
}
