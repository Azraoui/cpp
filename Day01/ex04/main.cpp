/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:10:06 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/10 10:24:50 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream file(av[1]);

		if (file)
		{
			if (file.peek() != std::ifstream::traits_type::eof())
				replaceContent(file, av);
			else
				std::cout << "Empty File!" << std::endl;
		}
		else
			std::cout << "Error:\nMissing File!" << std::endl;
	}
	else
		std::cout << "Error:\nYou need three arguments <filename, s1, s2>" << std::endl;
	return 0;
}