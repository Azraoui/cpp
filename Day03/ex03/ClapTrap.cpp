/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:51:11 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/16 15:10:20 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// -------- initialize privat attributes ----------

const int ClapTrap::_damage = 10;
const int ClapTrap::_energyCost = 1;


// -----------  Constructors & Destructor ---------------

ClapTrap::ClapTrap() : _name("unDefined"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " ClapTrap Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & instance)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = instance;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " ClapTrap Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

ClapTrap & ClapTrap::operator = (const ClapTrap & instance)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->_name = instance._name;
	this->_hitPoints = instance._hitPoints;
	this->_energyPoints = instance._energyPoints;
	this->_attackDamage = instance._attackDamage;
	return (*this);
}

std::ostream & operator << (std::ostream & line, ClapTrap const & instance)
{
	(void)instance;
	line << "ClapTrap Class!?" << std::endl;
	return (line);
}

// -------------------------- Member functions -------------------------

void	ClapTrap::attack( const std::string & target )
{
	if (this->_energyPoints - _energyCost > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints -= _energyCost;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " \
		<< _damage << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->_name << " energy points = " << this->_energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " Your Can't Attack!\nEnergy point = " << this->_energyPoints << " Hit points " << this->_hitPoints << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_attackDamage = amount;
	std::cout << "ClapTrap " << this->_name << " take damage " << this->_attackDamage << std::endl;
	if (this->_hitPoints - this->_attackDamage <= 0)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " Hit Point = " << this->_hitPoints << std::endl;	
	}
	else
	{
		this->_hitPoints -= this->_attackDamage;
		std::cout << "ClapTrap " << this->_name << " Hit Point = " << this->_hitPoints << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints - _energyCost > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints -= _energyCost;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " be reapired " << amount << std::endl;
		std::cout << "ClapTrap " << this->_name << " Hit Points = " << this->_hitPoints << " Energy Points " << this->_energyPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " You Can't Reapired!\nEnergy point = " << this->_energyPoints << " Hit points " << this->_hitPoints << std::endl;
	}
}