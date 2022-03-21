/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 10:34:35 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 18:09:04 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
}

Cure::Cure(const Cure &instance)
{
    *this = instance;
}

Cure::~Cure()
{
}

Cure & Cure::operator = (const Cure &instance)
{
    (void)instance;
    return (*this);
}

// ---------------------- Member functions -------------------


AMateria* Cure::clone() const
{
    AMateria *a = new Cure();
    return a;
}

void Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *"  << std::endl;
}