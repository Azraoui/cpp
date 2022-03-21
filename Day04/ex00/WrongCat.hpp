/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:33:10 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/18 11:39:26 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &instance);
        ~WrongCat();
        WrongCat & operator = (const WrongCat &instance);
	    void makeSound(void) const;
	    std::string	const getType(void) const;
};

std::ostream &	operator<<( std::ostream & ostr, WrongCat const & instance);

#endif