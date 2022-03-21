/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:59:01 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/06 08:45:17 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName)
{
	this->fristName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void)
{
	return fristName;
}
std::string	Contact::getLastName(void)
{
	return lastName;
}
std::string	Contact::getNickName(void)
{
	return nickName;
}
std::string	Contact::getPhoneNumber(void)
{
	return phoneNumber;
}
std::string	Contact::getDarkestSecret(void)
{
	return darkestSecret;
}