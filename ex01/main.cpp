/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 20:00:39 by icastell          #+#    #+#             */
/*   Updated: 2022/08/28 10:43:56 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	return (0);
}
