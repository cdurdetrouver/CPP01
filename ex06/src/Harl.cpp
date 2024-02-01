/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:47:52 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 15:58:03 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <stdexcept>
#include <map>

enum Fonctions{DEBUG,INFO,WARNING,ERROR};

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::map<std::string, Fonctions> s_mapStringValues;

	s_mapStringValues["DEBUG"] = DEBUG;
	s_mapStringValues["INFO"] = INFO;
	s_mapStringValues["WARNING"] = WARNING;
	s_mapStringValues["ERROR"] = ERROR;

	void (Harl::*pointeur[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::map<std::string, Fonctions>::iterator iter = s_mapStringValues.find(level);
	if (iter != s_mapStringValues.end()) {
		switch(iter->second)
		{
			case DEBUG:
				(this->*(pointeur[DEBUG]))();
				// fall through
			case INFO:
				(this->*(pointeur[INFO]))();
				// fall through
			case WARNING:
				(this->*(pointeur[WARNING]))();
				// fall through
			case ERROR:
				(this->*(pointeur[ERROR]))();
				// fall through
				break;
			default:
				break;
		}
	} else {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
