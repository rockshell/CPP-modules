/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:01:33 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/07 14:23:10 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap (void);
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap& src);
		ScavTrap& operator= (const ScavTrap& src); 
		~ScavTrap (void);

		void guardGate(void);
		void attack(const std::string& target);
};

#endif