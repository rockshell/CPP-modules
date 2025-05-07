/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:31 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/07 15:02:26 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	FragTrap Alpha("Alpha");

	Alpha.attack("Beta");
	Alpha.beRepaired(10);
	Alpha.highFivesGuys();

	return (0);
}