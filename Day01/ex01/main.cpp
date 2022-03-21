/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:57:57 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/09 15:49:13 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*test;

	test = zombieHorde(10, "Test");
	for (int i = 0; i < 10; i++)
	{
		test[i].announce();
	}
	delete  [] test;
	return 0;
}