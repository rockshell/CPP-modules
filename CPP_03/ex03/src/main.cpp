/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:31 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/12 18:33:03 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap a;
	DiamondTrap b("Giga Chadd");
	DiamondTrap c(a);

	a.whoAmI();
	a.attack("some super random dude");
	b.whoAmI();
	b.attack("Chadd-clone");
	c.whoAmI();
	return (0);
}