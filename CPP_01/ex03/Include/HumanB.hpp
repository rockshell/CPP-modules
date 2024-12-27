/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:02:50 by arch              #+#    #+#             */
/*   Updated: 2024/12/27 13:29:26 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon& weapon);
};

#endif