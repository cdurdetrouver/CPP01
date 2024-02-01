/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:26:23 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 20:05:06 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("JUlien");
	zombie->announce();
	delete	zombie;
	std::cout << std::endl;
	randomChump("gbazart");
}
