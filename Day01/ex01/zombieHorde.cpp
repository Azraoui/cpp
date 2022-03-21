/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:59:36 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/09 15:43:44 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int  n, std::string  name)
{
	Zombie	*zombie;

	zombie	= new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombie[i].setName(name);
	}
	return zombie;
}