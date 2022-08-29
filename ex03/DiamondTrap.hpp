/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:37:15 by icastell          #+#    #+#             */
/*   Updated: 2022/08/29 11:03:32 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap (const DiamondTrap &old_DiamondTrap);
		DiamondTrap& operator = (DiamondTrap const &old_DiamondTrap);
		~DiamondTrap();

		void attack(std::string const &target);
		void whoAmI(void);
};

#endif
