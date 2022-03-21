/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:49:49 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/10 18:48:41 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Karen karen;
		karen.complain(av[1]);
	}
	else
		std::cout << "Just one arrgument!" << std::endl;
	return 0;
}