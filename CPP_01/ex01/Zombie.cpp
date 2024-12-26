/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:00:50 by arch              #+#    #+#             */
/*   Updated: 2024/12/26 13:20:28 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
#include <iostream>
#include "Zombie.hpp"

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name) {
	_name = name;
}
