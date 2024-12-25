/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:10:14 by arch              #+#    #+#             */
/*   Updated: 2024/12/25 14:37:14 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie randomZombie(name);
	randomZombie.announce();
}