/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:32:10 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/18 11:32:42 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// --------------- Constructors & Destructos -----------------

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &instance)
{
    std::cout << "WrongAnimal: Copy constructor called" << std::endl;
    *this = instance;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &instance){
    this->type = instance.type;
    return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, WrongAnimal const & instance)
{
    (void)instance;
    ostr << "WrongAnimal Class!? Don't worry allah with us ?!" << std::endl;
    return (ostr);
}

// -------------------------- Member functions -------------------------

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal: choose which Wronganimal (Dog, Cat)." << std::endl;
}

std::string const WrongAnimal::getType(void) const
{
    return (this->type);
}