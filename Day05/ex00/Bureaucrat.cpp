/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:30:34 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/21 19:06:12 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Section 1: about Constuctor and destructor

Bureaucrat::Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw (0);
	else if (this->_grade > 150)
		throw (1);
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{}

/* Section 2: about operator overloading " = & << " -> overloading
 overloading : it's like to change from utility to andother utility simplie as this. */

 Bureaucrat & Bureaucrat::operator = (Bureaucrat const & obj)
 {
	 (void)obj;
	 // this->attributes = obj.attributes;
	return (*this);
 }

 std::ostream & operator << (std::ostream & oput, Bureaucrat const & obj)
 {
	 (void)obj;
	 oput << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	 return oput;
 }

 // Memeber Functions of this Class.

 std::string	Bureaucrat::getName() const
 {
	 return this->_name;
 }

 int	Bureaucrat::getGrade() const
 {
	 return this->_grade;
 }

// Nested classes of Bureaucrat.

 class Bureaucrat::GradeTooHighException
 {
	 
 };

 class Bureaucrat::GradeTooLowException
 {
	 
 };