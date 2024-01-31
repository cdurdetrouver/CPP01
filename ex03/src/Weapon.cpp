/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:59:30 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/31 12:10:12 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType(void)
{
	return (this->type);
}
void		Weapon::setType(std::string	type)
{
	this->type = type;
}