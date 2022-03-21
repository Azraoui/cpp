/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:31:21 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 15:28:13 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &instance);
		virtual ~AMateria();
		AMateria & operator = (const AMateria &instance);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

std::ostream &	operator<<( std::ostream & ostr, AMateria const & instance);

#endif