/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:45:23 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/07 19:27:38 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	getInput(std::string str)
{
	std::string input;
	while (1)
	{
		std::cout << str;
		std::getline (std::cin, input);
		if (!input.empty())
			break ;
		else
			std::cout << "Empty field!\n";
	}
	return input;
}

int	is_digit(const char *str)
{
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
			return 1;
	}
	return 0;
}

int main()
{
	Contact 	contact;
	PhoneBook 	phonebook;
	int			index;

	phonebook.setVar();
	while (1)
	{
		index = -1;
		std::string input;
		std::cout << "\n\n ---------------------------\n";
		std::cout << " | ADD | | SEARCH | | EXIT |\n";
		std::cout << " ---------------------------\n\n";
		std::cout << ">> ";
		std::getline (std::cin, input);
		if (input == "EXIT")
			exit(0);
		if (input == "ADD")
		{
			input = getInput("Enter Fist Name: ");
			contact.setFirstName(input);
			input.clear();
			input = getInput("Enter Last Name: ");
			contact.setLastName(input);
			input.clear();
			input = getInput("Enter Nickname: ");
			contact.setNickName(input);
			input.clear();
			input = getInput("Enter Phone Number: ");
			contact.setPhoneNumber(input);
			input.clear();
			input = getInput("Enter Darkest Secret: ");
			contact.setDarkestSecret(input);
			input.clear();
			phonebook.insertContact(contact);
		}
		else if (input == "SEARCH")
		{
			if (phonebook.getIndex() == 0)
				std::cout << "Empty Contacts\n";
			else
			{
				phonebook.displayContacts();
				while (1)
				{
					input.clear();
					std::cout << "\nEnter Contact Index: ";
					std::getline (std::cin, input);
					if (!is_digit(input.c_str()))
						index = std::atoi(input.c_str());
					if ((index - 1) >= 0 && (index - 1) < phonebook.getIndex())
					{
						phonebook.displayContactInfo(index - 1);
						break ;
					}
					else
						std::cout << "Wrong Index!\n";
				}
			}
		}
		input.clear();
	}
	return 0;
}