/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:28:14 by icastell          #+#    #+#             */
/*   Updated: 2022/11/04 10:13:58 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "";
    this->ClapTrap::name = this->name + "_clap_name";
    this->FragTrap::Hitpoints = 100;
    this->ScavTrap::Energy_points = 50;
    this->FragTrap::Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
    this->FragTrap::Hitpoints = 100;
    this->ScavTrap::Energy_points = 50;
    this->FragTrap::Attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &old_DiamondTrap) : name(old_DiamondTrap.getName())
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->ClapTrap::name = old_DiamondTrap.getName();
    this->FragTrap::Hitpoints = old_DiamondTrap.getHitPoints();
    this->ScavTrap::Energy_points = old_DiamondTrap.getEnergyPoints();
    this->FragTrap::Attack_damage = old_DiamondTrap.getAttackDamage();
    std::cout << "DiamondTrap copy constructor is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (DiamondTrap const &old_DiamondTrap)
{
    if (this != &old_DiamondTrap)
    {
        this->name = old_DiamondTrap.getName();
        this->ClapTrap::name = old_DiamondTrap.getName() + "_clap_name";
        this->FragTrap::Hitpoints = old_DiamondTrap.getHitPoints();
        this->ScavTrap::Energy_points = old_DiamondTrap.getEnergyPoints();
        this->FragTrap::Attack_damage = old_DiamondTrap.getAttackDamage();
    }
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
