/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:37:45 by arch              #+#    #+#             */
/*   Updated: 2024/12/25 15:51:35 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

int	main() {
	Zombie* chubbs = newZombie("Chubbs");
	chubbs->announce();
	randomChump("Ransom");
	delete chubbs;
	return (0);
}