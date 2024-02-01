/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:55:51 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 15:20:39 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N <= 0)
	{
		std::cerr << "N Cannot be less or equal to zero" << std::endl;
		return (NULL);
	}
	horde = new (std::nothrow)Zombie[N];
	if (horde == NULL)
	{
		std::cerr << "allocation doesn't work" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
