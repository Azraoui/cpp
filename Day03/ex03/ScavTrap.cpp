/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:49:11 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 10:16:51 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


// -----------  Constructors & Destructor ---------------

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & instance)
{
	std::cout << " ScavTrap Copy constructor called" << std::endl;
	*this = instance;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << this->_name << " ScavTrap paramter constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

ScavTrap & ScavTrap::operator = (const ScavTrap & instance)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = instance._name;
	this->_hitPoints = instance._hitPoints;
	this->_energyPoints = instance._energyPoints;
	this->_attackDamage = instance._attackDamage;
	return (*this);
}

std::ostream & operator << (std::ostream & line, ScavTrap const & instance)
{
	(void)instance;
	line << "ScavTrap Class!?" << std::endl;
	return (line);
}

// --------------- member function --------------

void	ScavTrap::attack( const std::string & target )
{
	if (this->_energyPoints - _energyCost > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints -= _energyCost;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " \
		<< _damage << " points of damage!" << std::endl;
		std::cout << "ScavTrap " << this->_name << " energy points = " << this->_energyPoints << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " Your Can't Attack!\nEnergy point = " << this->_energyPoints << " Hit points " << this->_hitPoints << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "I'm a Wake!" << std::endl;
}