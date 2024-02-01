/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:55:57 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 15:26:59 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(INT_MAX, "julien");
	if (horde != NULL)
	{
		for (int i = 0;i < 3; i++)
		{
			horde[i].announce();
		}
	}
	horde = zombieHorde(2, "test");
	if (horde != NULL)
	{
		for (int i = 0;i < 2; i++)
		{
			horde[i].announce();
		}
		delete[] horde;
	}
	horde = zombieHorde(3, "");
	if (horde != NULL)
	{
		for (int i = 0;i < 3; i++)
		{
			horde[i].announce();
		}
		delete[] horde;
	}
	return (0);
}
