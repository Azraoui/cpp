/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 10:36:22 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 10:53:10 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice &instance);
        ~Ice();
        Ice & operator = (const Ice &instance);
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};

std::ostream &	operator<<( std::ostream & ostr, Ice const & instance);

#endif