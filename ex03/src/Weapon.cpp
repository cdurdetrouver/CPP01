/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:59:30 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 19:59:46 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type) : type(type)
{
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType() const
{
	return type;
}

void		Weapon::setType(std::string	type)
{
	this->type = type;
}