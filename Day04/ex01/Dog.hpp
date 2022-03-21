/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:46 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 19:32:28 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	 *brain;
	public:
		Dog(void);
		Dog(const Dog &instance);
		Dog & operator = (const Dog &instance);
		virtual void	makeSound(void) const;
		std::string	const getType(void) const;
		virtual ~Dog();
};

std::ostream &	operator << ( std::ostream & ostr, Dog const & instance);

#endif