/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:50:42 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/16 12:41:54 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::cout << "\nGame Start! not enjoyable!\n\n";
	ClapTrap a("abdellah");
	ClapTrap b("abdeali");
	std::cout << "\n-------------------\n\n";
	a.attack("abdeali");
	std::cout << "\n-------------------\n\n";
	b.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	b.beRepaired(5);
	std::cout << "\n-------------------\n\n";
	b.attack("abdellah");
	std::cout << "\n-------------------\n\n";
	a.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	b.attack("abdellah");
	std::cout << "\n-------------------\n\n";
	a.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	a.beRepaired(10);
	std::cout << "\n-------------------\n\n";
	return 0;
}