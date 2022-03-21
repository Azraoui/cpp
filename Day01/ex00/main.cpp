/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:28:00 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/08 18:52:23 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *z1;

	z1 = newZombie("brahim");
	z1->announce();
	delete z1;
	randomChump("youssef");
	return 0;
}