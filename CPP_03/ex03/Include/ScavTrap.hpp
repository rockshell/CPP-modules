/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:01:33 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/12 17:40:34 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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
};

#endif