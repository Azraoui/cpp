/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:31:22 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 18:16:54 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria &instance)
{
	*this = instance;
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator = (const AMateria &instance){
	if (this == &instance)
		return *this;
	this->_type = instance._type;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, AMateria const & instance)
{
	ostr << instance.getType() << std::endl;
	return (ostr);
}

// ---------------------------- Member Functions --------------

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter & target)
{
	std::cout << "Nothing Here: " << target.getName() << std::endl;
}