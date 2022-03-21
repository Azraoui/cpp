/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:11:38 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 19:23:02 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal &instance);
        Animal & operator = (const Animal &instance);
        virtual void    makeSound(void) const;
        std::string	const getType(void) const;
        virtual ~Animal();
};

std::ostream &	operator<<( std::ostream & ostr, Animal const & instance);

#endif