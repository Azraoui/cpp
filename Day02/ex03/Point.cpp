/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:50:59 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/14 13:24:47 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// A default constructor that initializes x and y to 0.
Point::Point() : x(0), y(0)
{
}

// Constructor with two const float to initializes x and y.
Point::Point(const float fp1, const float fp2) : x(fp1), y(fp2)
{
}

// Copy Constructor.
Point::Point(Point const & instance) : x(instance.x), y(instance.y)
{
}

// copy assignment operator overload.
Point const & Point::operator = (Point const & instance)
{
	(void)instance;
	return *this;
}

// Destructor.
Point::~Point()
{
}

float Point::getX(void) const
{
	return (this->x.toFloat());
}

float Point::getY(void) const
{
	return (this->y.toFloat());
}

// copy of ostream operator overload.
std::ostream & operator << (std::ostream & line, Point const & instance)
{
	line << "x = " << instance.getX() << " y = " << instance.getY();
	return line;
}