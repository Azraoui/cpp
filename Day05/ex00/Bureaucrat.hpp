/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:30:32 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/21 19:01:50 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	protected:
		std::string const _name;
		int	_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & obj);
		Bureaucrat & operator = (Bureaucrat const & obj);

		class GradeTooHighException;
		class GradeTooLowException;

		// Getters
		std::string	getName(void) const;
		int	getGrade(void) const;

		~Bureaucrat();
};

std::ostream & operator << (std::ostream & oput, Bureaucrat const & obj);

#endif