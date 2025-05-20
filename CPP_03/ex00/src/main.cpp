/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:31 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/12 18:37:58 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap Noname;
	ClapTrap Alpha("Alpha");
	ClapTrap Beta(Noname);
	ClapTrap Gamma = Alpha;

	Noname.takeDamage(5);
	Alpha.attack("Beta");
	Alpha.beRepaired(20);
	Alpha.takeDamage(10);
	Beta.attack("Alpha");
	Gamma.beRepaired(10);

	return (0);
}
