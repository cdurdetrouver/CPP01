/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:55:57 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/31 14:10:06 by gbazart          ###   ########.fr       */
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
	horde = zombieHorde(3, "maxime");
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