/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:37:45 by arch              #+#    #+#             */
/*   Updated: 2025/04/30 13:49:15 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie* chubbs = newZombie("Chubbs");
	chubbs->announce();
	randomChump("Ransom");
	delete chubbs;
	return (0);
}