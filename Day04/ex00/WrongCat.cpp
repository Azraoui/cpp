/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:34:07 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/18 11:34:46 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// --------------- Constructors & Destructos -----------------

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &instance)
{
    std::cout << "WrongCat: Copy constructor called" << std::endl;
    *this = instance;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called" << std::endl;
}

// ----------------- operator overloading -------------------

WrongCat & WrongCat::operator = (const WrongCat &instance){
    this->type = instance.type;
    return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, WrongCat const & instance)
{
    (void)instance;
    ostr << "WrongCat Class!? Don't worry allah with us ?!" << std::endl;
    return (ostr);
}

// ------------------ Member functions -------------------------

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat: Meaw Meaw Mewa!?" << std::endl;
}

std::string const WrongCat::getType(void) const
{
    return (this->type);
}