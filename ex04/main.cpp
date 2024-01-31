/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:20:31 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/31 16:34:05 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

std::string	replace(std::string str, std::string s1, std::string s2)
{
	size_t	i = 0;
	size_t found = 0;

	while (i < str.size())
	{
		found = str.find(s1, i);
		if (found!=std::string::npos)
		{
			str.erase(found, s1.size());
			str.insert(found, s2);
		}
		else
			break;
		i = found;
	}
	return (str);
}

int main(int argc, char **argv)
{
	std::ifstream finput;
	std::ofstream foutput;

	if (argc != 4 || (argv[2][0] == 0 || argv[3][0] == 0))
	{
		std::cerr << "Porgram input : file string1 (not empty) string2 (not empty)" << std::endl;
		return (1);
	}
	finput.open(argv[1], std::ios::in);
	if (!finput.is_open())
	{
		std::cerr << "Bad file in input" << std::endl;
		return (1);
	}
	char *s = new (std::nothrow)char[strlen(argv[1])+strlen(".replace")+1];
	if (s == NULL)
	{
		std::cerr << "Allocation failed" << std::endl;
		return (1);
	}
	strcpy(s,argv[1]);
	strcat(s,".replace");
	foutput.open(s, std::ios::out);
	delete[] s;
	if (!finput.is_open())
	{
		finput.close();
		std::cerr << "Error with ouput file" << std::endl;
		return (1);
	}

	std::string	start;
	std::string	dest;
	std::string	s1;
	std::string	s2;

	s1 = argv[2];
	s2 = argv[3];
	std::getline(finput >> std::noskipws ,start, '\0');
	dest = replace(start, s1, s2);
	foutput << dest;
	finput.close();
	foutput.close();
	return (0);
}

// std::string replace(std::string str,std::string str1, std::string str2)
// {
// 	std::string	dest;

// 	while (str)
// 	{
// 		str++;
// 	}
// }