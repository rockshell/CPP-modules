/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:01:33 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/29 15:37:19 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap (void);
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap& src);
		ScavTrap& operator= (const ScavTrap& src); 
		~ScavTrap (void);

		void guardGate(void);
		void attack(const std::string& target);
	
	protected:
		std::string _scav_name;
		int	_scav_hp;
		int _scav_ep;
		int _scav_dmg;
};

#endif
