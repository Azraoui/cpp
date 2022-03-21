/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:48:05 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 10:48:58 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


// -----------  Constructors & Destructor ---------------

DiamondTrap::DiamondTrap()
{
	this->_attackDamage = 30;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & instance)
{
	std::cout << " DiamondTrap Copy constructor called" << std::endl;
	*this = instance;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << this->_name << " DiamondTrap paramter constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

DiamondTrap & DiamondTrap::operator = (const DiamondTrap & instance)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->_name = instance._name;
	this->_hitPoints = instance._hitPoints;
	this->_energyPoints = instance._energyPoints;
	this->_attackDamage = instance._attackDamage;
	return (*this);
}

std::ostream & operator << (std::ostream & line, DiamondTrap const & instance)
{
	(void)instance;
	line << "DiamondTrap Class!?" << std::endl;
	return (line);
}

// ---------- Member Function -----------------

void	DiamondTrap::whoAmi(void)
{
	std::cout << "DiamondTrap's name = " << this->_name << std::endl;
	std::cout << "ClapTrap's name = " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}