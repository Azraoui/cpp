/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:42 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/18 10:56:40 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// --------------- Constructors & Destructos -----------------

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat &instance)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = instance;
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
}

// ----------------- operator overloading -------------------

Cat & Cat::operator = (const Cat &instance){
    this->type = instance.type;
    return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Cat const & instance)
{
    (void)instance;
    ostr << "Cat Class!? Don't worry allah with us ?!" << std::endl;
    return (ostr);
}

// ------------------ Member functions -------------------------

void    Cat::makeSound(void) const
{
    std::cout << "Cat: Meaw Meaw Mewa!?" << std::endl;
}

std::string const Cat::getType(void) const
{
    return (this->type);
}