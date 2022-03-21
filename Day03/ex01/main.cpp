/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:47:51 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/16 15:25:26 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::string s1 = "Abdellah";
	std::string s2 = "Youssef";

	std::cout << "\nGame Start! not enjoyable!\n\n";
	ClapTrap a(s1);
	ScavTrap b(s2);
	std::cout << "\n-------------------\n\n";
	a.attack(s2);
	std::cout << "\n-------------------\n\n";
	b.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	b.beRepaired(5);
	std::cout << "\n-------------------\n\n";
	b.attack(s1);
	std::cout << "\n-------------------\n\n";
	a.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	b.attack(s1);
	std::cout << "\n-------------------\n\n";
	a.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	a.beRepaired(10);
	std::cout << "\n-------------------\n\n";
	b.guardGate();
	return 0;
}