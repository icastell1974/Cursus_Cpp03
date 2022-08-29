/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:57:46 by icastell          #+#    #+#             */
/*   Updated: 2022/08/29 11:56:43 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	/*std::cout << "DiamondTrap:" << std::endl;
	
	DiamondTrap	C("CARLOS");

	C.attack("IDOYA");
	C.takeDamage(6);
	C.beRepaired(4);
	C.takeDamage(3);
	C.guardGate();
	C.highFivesGuys();
	C.whoAmI();
	C.beRepaired(8);
	C.takeDamage(17);
	
	std::cout << "FragTrap:" << std::endl;
	
	FragTrap	M("MAITE");

	M.attack("IDOYA");
	M.takeDamage(7);
	M.beRepaired(4);
	M.takeDamage(3);
	M.beRepaired(8);
	M.highFivesGuys();

	std::cout << "ScavTrap:" << std::endl;
	
	ScavTrap	A("AMAYA");

	A.attack("IDOYA");
	A.takeDamage(7);
	A.beRepaired(4);
	A.takeDamage(3);
	A.beRepaired(8);
	A.guardGate();

	std::cout << "ClapTrap:" << std::endl;
	
	ClapTrap	I("IRANZU");

	I.attack("IDOYA");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(3);
	I.beRepaired(8);*/
	
	std::cout << "ClapTrap:" << std::endl;
	
	ClapTrap	I("IRANZU");

	I.attack("IDOYA");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(3);
	I.beRepaired(8);

	std::cout << "ScavTrap:" << std::endl;
	
	ScavTrap	A("AMAYA");

	A.attack("IDOYA");
	A.takeDamage(7);
	A.beRepaired(4);
	A.takeDamage(3);
	A.beRepaired(8);
	A.guardGate();

	std::cout << "FragTrap:" << std::endl;
	
	FragTrap	M("MAITE");

	M.attack("IDOYA");
	M.takeDamage(7);
	M.beRepaired(4);
	M.takeDamage(3);
	M.beRepaired(8);
	M.highFivesGuys();

	std::cout << "DiamondTrap:" << std::endl;
	
	DiamondTrap	C("CARLOS");

	C.attack("IDOYA");
	C.takeDamage(6);
	C.beRepaired(4);
	C.takeDamage(3);
	C.guardGate();
	C.highFivesGuys();
	C.whoAmI();
	C.beRepaired(8);
	C.takeDamage(17);
	return (0);
}
