/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:06:39 by icastell          #+#    #+#             */
/*   Updated: 2022/11/03 15:44:24 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("") 
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &old_FragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = old_FragTrap;
}

FragTrap& FragTrap::operator = (FragTrap const &old_FragTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = old_FragTrap.getName();
	this->Hitpoints = old_FragTrap.getHitPoints();
	this->Energy_points = old_FragTrap.getEnergyPoints();
	this->Attack_damage = old_FragTrap.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " high fives!" << std::endl;
}
