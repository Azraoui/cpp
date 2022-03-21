/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:31:26 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/16 16:39:27 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


// -----------  Constructors & Destructor ---------------

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & instance)
{
	std::cout << " FragTrap Copy constructor called" << std::endl;
	*this = instance;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << this->_name << " FragTrap paramter constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

FragTrap & FragTrap::operator = (const FragTrap & instance)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_name = instance._name;
	this->_hitPoints = instance._hitPoints;
	this->_energyPoints = instance._energyPoints;
	this->_attackDamage = instance._attackDamage;
	return (*this);
}

std::ostream & operator << (std::ostream & line, FragTrap const & instance)
{
	(void)instance;
	line << "FragTrap Class!?" << std::endl;
	return (line);
}

// --------------- member function --------------

void	FragTrap::attack( const std::string & target )
{
	if (this->_energyPoints - _energyCost > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints -= _energyCost;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " \
		<< _damage << " points of damage!" << std::endl;
		std::cout << "FragTrap " << this->_name << " energy points = " << this->_energyPoints << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " Your Can't Attack!\nEnergy point = " << this->_energyPoints << " Hit points " << this->_hitPoints << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Salam Alaykom Warahmato Lah Wa Barakatoh" << std::endl;
}