/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:32:43 by icastell          #+#    #+#             */
/*   Updated: 2022/08/26 12:59:02 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &old_ClapTrap);
		ClapTrap& operator = (ClapTrap const &old_ClapTrap);
		~ClapTrap(void);
		
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		
		/*int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		//Comparision operations
		bool	operator > (Fixed const &comp_Fixed) const;
		bool	operator < (Fixed const &comp_Fixed) const;
		bool	operator >= (Fixed const &comp_Fixed) const;
		bool	operator <= (Fixed const &comp_Fixed) const;
		bool	operator == (Fixed const &comp_Fixed) const;
		bool	operator != (Fixed const &comp_Fixed) const;

		//Arithmetic operators
		Fixed	operator + (Fixed const &second_Fixed);
		Fixed	operator - (Fixed const &second_Fixed);
		Fixed	operator * (Fixed const &second_Fixed);
		Fixed	operator / (Fixed const &second_Fixed);

		//Increment and decrement operations
		Fixed&	operator ++ (void);	//preincremento ++i
		Fixed	operator ++ (int);	//postincremento i++
		Fixed&	operator -- (void);	//predecremento --i
		Fixed	operator -- (int);	//postdecremento i--
		
		//min and max operations
		static Fixed& min(Fixed &Fixed_a, Fixed &Fixed_b);
		static const Fixed& min(Fixed const &Fixed_a, Fixed const &Fixed_b);
		static Fixed& max(Fixed &Fixed_a, Fixed &Fixed_b);
		static const Fixed& max(Fixed const &Fixed_a, Fixed const &Fixed_b);*/
};

//std::ostream& operator << (std::ostream &os, Fixed const &actual_Fixed);

#endif
