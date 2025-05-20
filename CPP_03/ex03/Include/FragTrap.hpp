/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:33:03 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/12 17:40:36 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

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
};

#endif
