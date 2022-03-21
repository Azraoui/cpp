/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:50:59 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/16 14:36:01 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string 		_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;
		static const int	_damage;
		static const int	_energyCost;

	public:
		ClapTrap();
		ClapTrap(std::string const & name);
		ClapTrap(ClapTrap const & instance);
		ClapTrap & operator = (ClapTrap const & instance);
		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap();
};

std::ostream & operator << (std::ostream & line, ClapTrap const & instance);

#endif