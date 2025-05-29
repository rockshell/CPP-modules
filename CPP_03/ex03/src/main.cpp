/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:31 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/29 18:22:25 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	clapTrapTesting() {
	std::cout << "===\nClapTrap constructors step\n===" << std::endl;
	ClapTrap alpha;
	ClapTrap beta("Beta");
	ClapTrap gamma(alpha);
	ClapTrap omikron = beta;
	
	std::cout << "===\nClapTrap testing step\n===" << std::endl;
	alpha.attack("beta");
	beta.takeDamage(0);
	gamma.takeDamage(5);
	gamma.beRepaired(5);
	omikron.attack("someone");

	std::cout << "===\nClapTrap destruction step\n===" << std::endl;
};

void	scavTrapTesting() {
	std::cout << "===\nScavTrap constructors step\n===" << std::endl;
	ScavTrap alpha;
	ScavTrap beta("Beta");
	ScavTrap gamma(alpha);
	ScavTrap omikron = beta;
	
	std::cout << "===\nScavTrap testing step\n===" << std::endl;
	alpha.attack("beta");
	beta.takeDamage(0);
	gamma.takeDamage(5);
	gamma.beRepaired(5);
	omikron.attack("someone");
	omikron.guardGate();

	std::cout << "===\nScavTrap destruction step\n===" << std::endl;	
};

void	fragTrapTesting() {
	std::cout << "===\nFragTrap constructors step\n===" << std::endl;
	FragTrap alpha;
	FragTrap beta("Beta");
	FragTrap gamma(alpha);
	FragTrap omikron = beta;
	
	std::cout << "===\nFragTrap testing step\n===" << std::endl;
	alpha.attack("beta");
	beta.takeDamage(0);
	gamma.takeDamage(5);
	gamma.beRepaired(5);
	omikron.attack("someone");
	omikron.highFivesGuys();
	alpha.highFivesGuys();

	std::cout << "===\nFragTrap destruction step\n===" << std::endl;	
};

void	diamondTrapTesting() {
	std::cout << "===\nDiamondTrap constructors step\nExtra attention to the attributes\n===" << std::endl;
	DiamondTrap alpha;
	DiamondTrap beta("Beta");
	DiamondTrap gamma(alpha);
	DiamondTrap omikron = beta;
	
	std::cout << "===\nDiamondTrap testing step\n===" << std::endl;
	alpha.attack("beta");
	beta.takeDamage(0);
	gamma.takeDamage(5);
	gamma.beRepaired(5);
	omikron.attack("someone");
	omikron.highFivesGuys();
	omikron.guardGate();
	omikron.whoAmI();
	alpha.whoAmI();

	std::cout << "===\nDiamondTrap destruction step\n===" << std::endl;	
};

	
int	main(void) {
	// clapTrapTesting();
	// scavTrapTesting();
	// fragTrapTesting();
	diamondTrapTesting();
	return (0);
}
