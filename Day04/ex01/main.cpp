/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:07:58 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 19:36:31 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	testLeaks()
{
	Cat a;
	Cat b(a);
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\n\n---------------------------\n\n";

	Animal *arr[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
		delete arr[i];
	
}

int main()
{
	testLeaks();
	// system("leaks ex01");
	return (0);
}