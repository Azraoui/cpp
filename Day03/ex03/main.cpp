/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:47:51 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/17 10:49:21 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::string s1 = "Abdellah";
	std::string s2 = "Youssef";
	std::string s3 = "ayoub";
	std::string s4 = "boss";

	std::cout << "\nGame Start! not enjoyable!\n\n";

	DiamondTrap boss(s4);
	std::cout << "\n-------------------\n\n";
	boss.highFivesGuys();
	std::cout << "\n-------------------\n\n";
	boss.attack(s2);
	std::cout << "\n-------------------\n\n";
	boss.attack(s3);
	std::cout << "\n-------------------\n\n";
	boss.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	boss.beRepaired(5);
	std::cout << "\n-------------------\n\n";
	boss.attack(s1);
	std::cout << "\n-------------------\n\n";
	boss.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	boss.attack(s1);
	std::cout << "\n-------------------\n\n";
	boss.takeDamage(5);
	std::cout << "\n-------------------\n\n";
	boss.beRepaired(10);
	std::cout << "\n-------------------\n\n";
	boss.guardGate();
	std::cout << "\n-------------------\n\n";
	boss.whoAmi();
	return 0;
}