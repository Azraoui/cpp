/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:31:32 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/16 16:36:01 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const FragTrap &instance);
        FragTrap(std::string const & name);
        ~FragTrap();
        FragTrap & operator = (const FragTrap &instance);
        void    highFivesGuys(void);
        void	attack( const std::string & target );
};

std::ostream &	operator<<( std::ostream & ostr, FragTrap const & instance);

#endif