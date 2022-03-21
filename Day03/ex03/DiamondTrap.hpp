/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:47:51 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 10:48:20 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const & obj);
		DiamondTrap(std::string const & name);
		DiamondTrap & operator = (DiamondTrap const & obj);
		~DiamondTrap();
		void	attack(std::string const & target);
		void	whoAmi();
};

std::ostream & operator << (std::ostream & line, DiamondTrap const & obj);

#endif