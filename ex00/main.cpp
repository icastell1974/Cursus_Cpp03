/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:49:10 by icastell          #+#    #+#             */
/*   Updated: 2022/11/03 16:09:16 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	I("IRANZU");

	std::cout << I.getName() << " has got " << I.getHitPoints() << " HIT POINTS, "
		<< I.getEnergyPoints() << " ENERGY POINTS and " << I.getAttackDamage()
		<< " ATTACK DAMAGE" << std::endl;
	
	I.attack("IDOYA");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(3);
	I.beRepaired(8);
	I.takeDamage(12);
	return (0);
}
