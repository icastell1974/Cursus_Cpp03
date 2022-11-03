/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:04:43 by icastell          #+#    #+#             */
/*   Updated: 2022/11/03 15:50:45 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap (const FragTrap &old_FragTrap);
		FragTrap& operator = (FragTrap const &old_FragTrap);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
