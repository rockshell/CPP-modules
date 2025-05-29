/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:33:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/29 15:32:08 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap (void);
		FragTrap (std::string name);
		FragTrap (const FragTrap& src);
		FragTrap& operator= (const FragTrap& src); 
		~FragTrap (void);

		void highFivesGuys(void);
		
	protected:
		std::string _frag_name;
		int	_frag_hp;
		int _frag_ep;
		int _frag_dmg;
};

#endif
