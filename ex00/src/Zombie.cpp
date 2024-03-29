/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:26:16 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 20:00:31 by gbazart          ###   ########.fr       */
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

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie " << (this->name.empty() ? "no name" : this->name) << " is created." << std::endl;
}
