/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:29:51 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/18 11:31:45 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &instance);
		~WrongAnimal();
		WrongAnimal & operator = (const WrongAnimal &instance);
		void makeSound(void) const;
		std::string	const getType(void) const;
};

std::ostream &	operator<<( std::ostream & ostr, WrongAnimal const & instance);

#endif