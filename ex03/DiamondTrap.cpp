/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:28:14 by icastell          #+#    #+#             */
/*   Updated: 2022/08/29 11:15:06 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()//: ClapTrap("") 
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	/*this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;*/
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->Hitpoints = FragTrap::getHitPoints(); 		//this->Hitpoints = FragTrap::Hitpoints;
	this->Energy_points = ScavTrap::getEnergyPoints();	//this->Energy_points = ScavTrap::Energy_points;
	this->Attack_damage = FragTrap::getAttackDamage();	//this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &old_DiamondTrap): ClapTrap(old_DiamondTrap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = old_DiamondTrap;
}

DiamondTrap& DiamondTrap::operator = (DiamondTrap const &old_DiamondTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = old_DiamondTrap.getName();
	this->Hitpoints = old_DiamondTrap.getHitPoints();
	this->Energy_points = old_DiamondTrap.getEnergyPoints();
	this->Attack_damage = old_DiamondTrap.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap Name: " << this->name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::getName() << std::endl;
}
