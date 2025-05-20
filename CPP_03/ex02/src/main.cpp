/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:31 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/12 18:34:38 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	FragTrap Alpha("Alpha");
	FragTrap New;
	FragTrap Mighty(Alpha);
	FragTrap Ben = Mighty;

	Alpha.attack("Beta");
	Alpha.beRepaired(10);
	Alpha.highFivesGuys();
	New.attack("Someone");
	Mighty.highFivesGuys();
	Ben.takeDamage(5);
	Ben.highFivesGuys();
	return (0);
}
