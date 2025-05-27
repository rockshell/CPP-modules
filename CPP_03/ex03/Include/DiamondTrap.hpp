/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:31:56 by arch              #+#    #+#             */
/*   Updated: 2025/05/27 19:48:43 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	public:
		DiamondTrap (void);
		DiamondTrap (std::string name);
		DiamondTrap (const DiamondTrap& src);
		DiamondTrap& operator= (const DiamondTrap& src);
		~DiamondTrap (void);

		void attack(const std::string &target);
		void whoAmI(void);
	private:
		std::string _name;
};

#endif
