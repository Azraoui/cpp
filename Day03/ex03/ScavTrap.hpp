/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:48:18 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 10:17:02 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const & instance);
		ScavTrap(std::string const & name);
		ScavTrap & operator = (ScavTrap const & instance);
		void	attack(const std::string & target);
		void	guardGate();
		~ScavTrap();
};

std::ostream & operator << (std::ostream & line, ScavTrap const & instance);

#endif