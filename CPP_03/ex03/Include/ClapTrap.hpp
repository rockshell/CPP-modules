/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:34 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/29 15:10:03 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap (void);
		ClapTrap (std::string name);
		ClapTrap (const ClapTrap& src);
		ClapTrap& operator= (const ClapTrap& src);
		~ClapTrap (void);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int	_hp;
		int	_ep;
		int	_damage;
};

#endif
