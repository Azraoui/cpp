/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:40 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/19 16:34:06 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// --------------- Constructors & Destructos -----------------

Dog::Dog(void) : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog &instance) : brain(new Brain())
{
    std::cout << "Dog: Copy constructor called" << std::endl;
    *this = instance;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog: Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

Dog & Dog::operator = (const Dog &instance)
{
    this->type = instance.type;
    (this->brain)->operator=(*(instance.brain));     // ==  *(this->brain) = *(instance.brain);
    return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Dog const & instance)
{
    (void)instance;
    ostr << "Dog Class!? Don't worry allah with us" << std::endl;
    return (ostr);
}

// -------------------------- Member functions -------------------------

void    Dog::makeSound(void) const
{
    std::cout << "Dog: Haw Haw Haw!?" << std::endl;
}

std::string	const Dog::getType(void) const
{
    return (this->type);
}