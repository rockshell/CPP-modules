/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:37:45 by arch              #+#    #+#             */
/*   Updated: 2024/12/26 13:19:41 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

int	main() {
	int	numOfZombies = 10;

	Zombie* horde = zombieHorde(numOfZombies, "Chubbs");
	if (horde) {
		for (int i = 0; i < numOfZombies; i++) {
			horde[i].announce();
		}
		delete[] horde;
	}
	return (0);
}