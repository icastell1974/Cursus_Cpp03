/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:49:10 by icastell          #+#    #+#             */
/*   Updated: 2022/08/26 18:09:01 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap I("IRANZU");

	I.attack("IDOYA");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(3);
	I.beRepaired(8);
	I.takeDamage(12);
	return (0);
}
