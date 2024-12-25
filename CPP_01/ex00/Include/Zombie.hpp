/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:52:52 by arch              #+#    #+#             */
/*   Updated: 2024/12/25 15:47:05 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie{
	public:
		void announce(void);
		Zombie (std::string name) {
			_name = name;
		}
		~Zombie() {
			std::cout << _name << " have met his demise...\n";
		}
	private:
		std::string _name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
#endif