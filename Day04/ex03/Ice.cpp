/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 10:36:27 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 16:26:19 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    this->_type = "ice";
}

Ice::Ice(const Ice &instance)
{
    *this = instance;
}

Ice::~Ice()
{
}

Ice & Ice::operator = (const Ice &instance)
{
    (void)(instance);
    return (*this);
}

// ---------------------- Member functions -------------------

AMateria* Ice::clone() const
{
    AMateria *a = new Ice();
    return a;
}

void Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}