/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:33:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/07 14:40:59 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap (void);
		FragTrap (std::string name);
		FragTrap (const FragTrap& src);
		FragTrap& operator= (const FragTrap& src); 
		~FragTrap (void);

		void highFivesGuys(void);
};

#endif