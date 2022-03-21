/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:50:24 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/14 14:35:02 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point a(0, 0);
	Point const b(0, 50);
	Point c(50, 50);
	Point p(1, 10);

	if (bsp(a, b, c, p))
		std::cout << "inside the triangle" << std::endl;
	else
		std::cout << "it's not!" << std::endl;
}