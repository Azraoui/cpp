/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:11:35 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/18 11:17:58 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// --------------- Constructors & Destructos -----------------

Animal::Animal(void)
{
    this->type = "Animal";
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &instance)
{
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = instance;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

Animal & Animal::operator = (const Animal &instance){
    this->type = instance.type;
    return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Animal const & instance)
{
    (void)instance;
    ostr << "Animal Class!? Don't worry allah with us ?!" << std::endl;
    return (ostr);
}

// -------------------------- Member functions -------------------------

void    Animal::makeSound(void) const
{
    std::cout << "Animal: choose which animal (Dog, Cat)." << std::endl;
}

std::string const Animal::getType(void) const
{
    return (this->type);
}