/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:55:54 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 18:42:40 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	Zombie::announce(void)
{
	std::cout << (this->name.empty() ? "no name" : this->name) << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << (this->name.empty() ? "no name" : this->name) << " is destroyed." << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Zombie is created." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
