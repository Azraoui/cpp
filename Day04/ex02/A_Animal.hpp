/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:11:38 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 19:34:19 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <iostream>

class A_Animal
{
    protected:
        std::string type;
    public:
        A_Animal(void);
        A_Animal(const A_Animal &instance);
        A_Animal & operator = (const A_Animal &instance);
        virtual void    makeSound(void) const = 0;
        virtual std::string	const getType(void) const = 0;
        virtual ~A_Animal();
};

std::ostream &	operator<<( std::ostream & ostr, A_Animal const & instance);

#endif