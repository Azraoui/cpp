/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:11:35 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 19:34:14 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

// --------------- Constructors & Destructos -----------------

A_Animal::A_Animal(void)
{
    this->type = "A_Animal";
    std::cout << "A_Animal: Default constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal &instance)
{
    std::cout << "A_Animal: Copy constructor called" << std::endl;
    *this = instance;
}

A_Animal::~A_Animal()
{
    std::cout << "A_Animal: Destructor called" << std::endl;
}

// ------------ operator overloading -------------------

A_Animal & A_Animal::operator = (const A_Animal &instance){
    this->type = instance.type;
    return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, A_Animal const & instance)
{
    (void)instance;
    ostr << "A_Animal Class!? Don't worry allah with us ?!" << std::endl;
    return (ostr);
}

// -------------------------- Member functions -------------------------
