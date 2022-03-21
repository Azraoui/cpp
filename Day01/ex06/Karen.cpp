/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:50:02 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/10 18:51:02 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;	
}

void	Karen::complain(std::string level)
{
	void (Karen::*fun[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	messages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for (; i < 4; i++)
	{
		if (messages[i] == level)
			break ;
	}
	Karen karen;
	switch (i)
	{
		case (0) :
			(this->*fun[i])();
			(this->*fun[i + 1])();
			(this->*fun[i + 2])();
			(this->*fun[i + 3])();
			break;
		case (1) :
			(this->*fun[i])();
			(this->*fun[i + 1])();
			(this->*fun[i + 2])();
			break;
		case (2) :
			(this->*fun[i])();
			(this->*fun[i + 1])();
			break;
		case (3) :
			(this->*fun[i])();
			break;
		case (4):
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
}

Karen::Karen()
{
}

Karen::~Karen()
{
}