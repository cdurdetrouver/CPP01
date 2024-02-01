/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:55:54 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 15:27:27 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	Zombie::announce(void)
{
	std::cout << (this->name.empty() ? "no name" : this->name) << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << (this->name.empty() ? "no name" : this->name) << ": deleted" << std::endl;
}

Zombie::Zombie(void)
{
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
