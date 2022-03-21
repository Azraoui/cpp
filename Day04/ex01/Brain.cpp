/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:10:35 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/19 17:54:22 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// --------------- Constructors & Destructos -----------------

Brain::Brain(void) : ideas(new std::string[100])
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain &instance) : ideas(new std::string[100])
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = instance;
}

Brain::~Brain()
{
	delete [] ideas;
	std::cout << "Brain: Destructor called" << std::endl;
}

// ------------ Operator overloading -------------------

Brain & Brain::operator = (const Brain &instance)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = instance.ideas[i];
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Brain const & instance)
{
	(void)instance;
	ostr << "Brain Class!? Don't worry allah with us ?!" << std::endl;
	return (ostr);
}

// -------------------------- Member functions -------------------------

