/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:11:35 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 16:41:09 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// --------------- Constructors & Destructos & operator assigment -----------------

Animal::Animal(void)
{
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

Animal & Animal::operator = (const Animal &instance){
    this->type = instance.type;
    return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Animal const & instance)
{
    ostr << "Animal Class!? What you need ?!" << std::endl;
    return (ostr);
}
