/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:55:48 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/19 18:32:25 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
	private:
		Brain	 *brain;
	public:
		Cat(void);
		Cat(const Cat &instance);
		Cat & operator = (const Cat &instance);
		virtual void makeSound(void) const;
		virtual std::string	const getType(void) const;
		virtual ~Cat();
};

std::ostream &	operator<<( std::ostream & ostr, Cat const & instance);

#endif