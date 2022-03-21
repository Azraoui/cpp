/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:52:37 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/21 15:25:35 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	testRef(int  &a)
{
	std::cout << "address = " << &a << std::endl;
	a = 9;
	return a;
}

int main()
{
	// int a = 7;
	int a = 0;
	std::cout << "&a = " << &a << std::endl;
	testRef(a);
	std::cout << "value of a = " << a << std::endl;
	// std::string err;

	// err = "Erorr!";

	// try {
	// 	if (b == 0)
	// 		throw (err);
	// 	int some = a / b;	
	// 	std::cout << some << std::endl;
	// } catch (std::string const & s) {
	// 	std::cout << s << std::endl;
	// }
	return (0);
}