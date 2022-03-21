/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:34:18 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 15:47:32 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria *holding[4];

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &instance);
        ~MateriaSource();
        MateriaSource & operator = (const MateriaSource &instance);
        void learnMateria(AMateria* obj);
        AMateria* createMateria(std::string const & type);
};

std::ostream &	operator<<( std::ostream & ostr, MateriaSource const & instance);

#endif