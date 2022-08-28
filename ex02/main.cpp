/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:03:37 by icastell          #+#    #+#             */
/*   Updated: 2022/08/28 10:21:19 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	I("IRANZU");

	I.attack("IDOYA");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(3);
	I.beRepaired(8);

	ScavTrap	A("AMAYA");

	A.attack("IDOYA");
	A.takeDamage(7);
	A.beRepaired(4);
	A.takeDamage(3);
	A.beRepaired(8);
	A.guardGate();

	FragTrap	M("MAITE");

	M.attack("IDOYA");
	M.takeDamage(7);
	M.beRepaired(4);
	M.takeDamage(3);
	M.beRepaired(8);
	M.highFivesGuys();
	return (0);
}
