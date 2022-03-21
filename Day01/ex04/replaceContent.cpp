/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceContent.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:18:13 by ael-azra          #+#    #+#             */
/*   Updated: 2022/03/10 12:17:51 by ael-azra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"

std::string	*replaceLine(std::string line, std::string s1, std::string s2)
{
	std::string *newLine;
	std::size_t index;
	std::size_t	start;

	index = 0;
	start = 0;
	newLine = new std::string;
	while (1)
	{
		index = line.find(s1, index);
		if (index == std::string::npos)
			break;
		if (index != 0)
			newLine->append(line, start, index - start);
		index += 1;
		start = index;
		newLine->append(s2);
	}
	newLine->append(line, start, line.length() - start);
	return newLine;
}

void	replaceContent(std::ifstream &file, char **av)
{
	std::string	newFileName;
	std::string *newLine;
	std::string line;

	newFileName = av[1];
	newFileName.append(".replace");
	std::ofstream newFile(newFileName);
	while (getline(file, line))
	{
		newLine = replaceLine(line, av[2], av[3]);
		newFile << newLine->append("\n");
		delete newLine;
	}
}