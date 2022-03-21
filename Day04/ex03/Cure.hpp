/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 10:34:32 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 10:53:14 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure &instance);
        ~Cure();
        Cure & operator = (const Cure &instance);
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};

std::ostream &	operator<<( std::ostream & ostr, Cure const & instance);

#endif