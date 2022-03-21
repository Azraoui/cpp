/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:50:47 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/14 13:24:15 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(const float fp1, const float fp2);
		Point(Point const & instance);
		Point const & operator = (Point const & instance);
		float getX(void) const;
		float getY(void) const;
		~Point();
};

std::ostream & operator << (std::ostream & line, Point const & instance);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif