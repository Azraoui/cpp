/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:48 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 19:29:07 by ael-azra         ###   ########.fr       */
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
		Cat & operator = (const Cat &instance);
		virtual void makeSound(void) const;
		std::string	const getType(void) const;
		virtual ~Cat();
};

std::ostream &	operator<<( std::ostream & ostr, Cat const & instance);

#endif