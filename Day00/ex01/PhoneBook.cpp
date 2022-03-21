/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:29:40 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/07 18:42:48 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::setVar(void)
{
	this->len = 8;
	this->index = 0;
	this->front = -1;
	this->rear = -1;
}

int		PhoneBook::getIndex(void)
{
	return (index);
}

void	PhoneBook::insertContact(Contact contact)
{
	if (index < len)
	{
		if (front == -1)
			front = 0;
		contacts[index++] = contact;
		rear = index;
	}
	else
	{
		Contact	swap[8];
		int	j;
		j = 1;
		for (int i = 0; i < len; i++)
		{
			if (j < rear)
				swap[i] = contacts[j++];
			else
				swap[i] = contact;
		}
		for (int i = 0; i < len; i++)
			contacts[i] = swap[i];
	}
}

void	printColumns(std::string str)
{
	int	len;

	len = str.size();
	std::cout << "|";
	if (len > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		std::cout << str;
		for (int i = len; i < 10; i++)
			std::cout << " ";
	}
}

void	PhoneBook::displayContacts(void)
{
	std::cout << "---------------------------------------------" << "\n";
	std::cout << "|Index     |First Name|Last Name |Nickname  |" << "\n";
	std::cout << "---------------------------------------------" << "\n";
	for (int i = 0; i < index; i++)
	{
		printColumns(std::to_string(i + 1));
		printColumns(contacts[i].getFirstName());
		printColumns(contacts[i].getLastName());
		printColumns(contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::displayContactInfo(int index)
{
	std::cout << "\n--------------------------------------\n\n";
	std::cout << "---> Contact Info <---\n\n";
	std::cout << "|First Name :     " << contacts[index].getFirstName() << " |\n";
	std::cout << "|Last Name :      " << contacts[index].getLastName() << " |\n";
	std::cout << "|Nickname :       " << contacts[index].getNickName() << " |\n";
	std::cout << "|Phone Number :   " << contacts[index].getPhoneNumber() << " |\n";
	std::cout << "|Darkest Secret : " << contacts[index].getDarkestSecret() << " |\n";
}