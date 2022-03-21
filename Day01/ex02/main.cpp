/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:52:51 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/09 16:55:58 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str;
	std::string test;
	std::string *stringPtr;
	std::string	&stringRef = str;

	str = "HI THIS IS BRAIN";
	stringPtr = &str;
	std::cout << "string ptr address = " << stringPtr << std::endl;
	std::cout << "string ptr value = " << *stringPtr << std::endl;
	std::cout << "string ref address= " << &stringRef << std::endl;
	std::cout << "string ref value = " << stringRef << std::endl;
	
	std::cout << "---------------------------------------" << std::endl;
	test = "Test";
	stringRef = test;
	std::cout << "string ptr address = " << stringPtr << std::endl;
	std::cout << "string ptr value = " << *stringPtr << std::endl;
	std::cout << "string ref address= " << &stringRef << std::endl;
	std::cout << "string ref value = " << stringRef << std::endl;
	return 0;
}