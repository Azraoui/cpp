/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:31:03 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 18:26:24 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        this->test[i] = NULL;
    }
}

Character::Character(std::string const & name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->test[i] = NULL;
    }
}

Character::Character(const Character &instance)
{
    *this = instance;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->test[i])
            delete this->test[i];
    }
}

Character & Character::operator = (const Character &instance){
    if (this == &instance)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        if (this->test[i])
            delete this->test[i];
        this->test[i] = instance.test[i]->clone();
    }
    this->_name = instance._name;
    return (*this);
}

// ----------------------------- Member Functions ------------------------


std::string const & Character::getName() const
{
    return this->_name;
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->test[i] == NULL)
        {
            this->test[i] = m;
            break;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        if (this->test[idx])
            this->test[idx] = NULL;
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
    {
        if (this->test[idx])
            this->test[idx]->use(target);
    }
}