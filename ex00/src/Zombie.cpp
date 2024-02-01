/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:26:16 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 15:28:07 by gbazart          ###   ########.fr       */
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

Zombie::Zombie(std::string name)
{
	this->name = name;
}
