/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:12:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/05 20:05:12 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
	_name = name;
	_hp = 100;
	_ep = 50;
	_damage = 20;
}

ScavTrap::~ScavTrap()
{
}
