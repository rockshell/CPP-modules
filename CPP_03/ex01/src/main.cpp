/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:31 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/07 15:02:47 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap Noname;
	ScavTrap Alpha("Alpha");
	ScavTrap Impostor(Alpha);
	ScavTrap Sleepy = Noname;
	ClapTrap Beta("Beta");

	Alpha.attack("Beta");
	Alpha.guardGate();
	Alpha.beRepaired(10);

	Noname.attack("nobody");
	Noname.takeDamage(5);
	Noname.beRepaired(5);

	Impostor.guardGate();
	Sleepy.attack("Beta");
	Beta.attack("Scavdard");
	return (0);
}
