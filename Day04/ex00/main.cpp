/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:07:58 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/20 19:23:32 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *test = new WrongCat();
	const WrongAnimal *testAnimal = new WrongAnimal();
	std::cout << testAnimal->getType() << std::endl;
	testAnimal->makeSound();
	std::cout << test->getType() << std::endl;
	test->makeSound();

	delete meta;
	delete j;
	delete i;
	return (0);
}