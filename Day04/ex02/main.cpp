/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:15:56 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/19 18:48:19 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	
	std::cout << "\n-------------Constructor----------------\n\n";
	
	Dog *da = new Dog();
	Cat *ca = new Cat();
	Cat *test = ca;

	std::cout << "\n\n----------------------------------------\n\n";

	std::cout << da->getType() << std::endl;
	da->makeSound();
	std::cout << ca->getType() << std::endl;
	ca->makeSound();
	test->makeSound();
	
	std::cout << "\n\n-------------Destructor----------------\n\n";

	delete da;
	delete test;

	return 0;
}
