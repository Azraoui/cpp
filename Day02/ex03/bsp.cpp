/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:51:09 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/14 14:33:56 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return (std::abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.000000));
}

bool bsp( Point const a, Point const  b, Point const c, Point const point)
{
	float	ar, a1, a2, a3;
	float	x1,y1, x2,y2, x3,y3, xp, yp;
	
	x1 = a.getX(); y1 = a.getY();
	x2 = b.getX(); y2 = b.getY();
	x3 = c.getX(); y3 = c.getY();
	xp = point.getX(); yp = point.getY();

	if ((xp <= x1 || xp <= x2 || xp <= x3) && (yp == x1 || yp == x2 || yp == x3))
		return (false);
	if ((yp <= y1 || yp <= y2 || yp <= y3) && (xp == x1 || xp == x2 || xp == x3))
		return (false);

	ar = area(x1, y1, x2, y2, x3, y3);
	a1 = area(xp, yp, x2, y2, x3, y3);
	a2 = area(x1, y1, xp, yp, x3, y3);
	a3 = area(x1, y1, x2, y2, xp, yp);

	if (ar == (a1 + a2 + a3))
		return (true);
	else
		return (false);
}
