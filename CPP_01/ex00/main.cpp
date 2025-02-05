/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:37:45 by arch              #+#    #+#             */
/*   Updated: 2025/02/05 13:54:08 by akulikov         ###   ########.fr       */
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