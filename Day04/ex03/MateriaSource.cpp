/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:34:16 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 18:21:03 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "ICharacter.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        this->holding[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &instance)
{
    *this = instance;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->holding[i])
            delete this->holding[i];
    }
}

MateriaSource & MateriaSource::operator = (const MateriaSource &instance){
    for (int i = 0; i < 4; i++)
    {
        this->holding[i] = instance.holding[i];
    }
    return (*this);
}


// ---------------- implement interface functions -----------------

void MateriaSource::learnMateria(AMateria* obj)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->holding[i] == NULL)
        {
            this->holding[i] = obj;
            return;
        }
    }
    delete this->holding[0];
    for (int i = 0; i < 3; i++)
    {
        this->holding[i] = this->holding[i + 1];
    }
    this->holding[3] = obj;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 3; i >= 0; i--)
    {
        if (this->holding[i] && this->holding[i]->getType() == type)
        {
            return (this->holding[i]->clone());
        }
    }
    return (NULL);
}