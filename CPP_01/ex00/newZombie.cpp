/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:05:42 by arch              #+#    #+#             */
/*   Updated: 2024/12/25 14:53:07 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie*	newZombie(std::string name) {
	Zombie* heapZombie = new Zombie(name);
	return (heapZombie);
}