/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:56:52 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/31 12:05:49 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "Weapon.h"

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string	type);
		~Weapon();

		std::string	getType(void);
		void		setType(std::string	type);
};


#endif