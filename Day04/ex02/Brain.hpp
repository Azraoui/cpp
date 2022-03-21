/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:10:39 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/19 17:54:51 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string *ideas;
	public:
		Brain(void);
		Brain(const Brain &instance);
		~Brain();
		Brain & operator = (const Brain &instance);
};

std::ostream &	operator<<( std::ostream & ostr, Brain const & instance);

#endif