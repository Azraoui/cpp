/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:31:07 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 15:35:39 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string _name;
        AMateria    *test[4];

    public:
        Character(void);
        Character(const Character &instance);
        Character(std::string const & name);
        ~Character();
        Character & operator = (const Character &instance);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

std::ostream &	operator<<( std::ostream & ostr, Character const & instance);

#endif