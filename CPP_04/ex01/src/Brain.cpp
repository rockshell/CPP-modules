/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:09:08 by arch              #+#    #+#             */
/*   Updated: 2025/06/02 19:20:43 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain () {
	std::cout << "New brain is in the jar. Constructor for an object of Brain class called." << std::endl;
};

Brain::Brain (const Brain& src) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain copied other brain. Copy-constructor for an object of Brain class called." << std::endl;
};

Brain &Brain::operator= (const Brain& src) {
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain stole other brain's ideas. Copy-assignment for an object of Brain class called." << std::endl;
	return (*this);
}

Brain::~Brain () {
	std::cout << "Brain is out of ideas. Destructor for an object of Brain class called." << std::endl;
};
