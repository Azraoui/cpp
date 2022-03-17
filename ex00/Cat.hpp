/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:48 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 16:55:49 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &instance);
        ~Cat();
        Cat & operator = (const Cat &instance);
        void    makeSound(void) const;
};

std::ostream &	operator<<( std::ostream & ostr, Cat const & instance);

#endif