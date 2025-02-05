/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:52:52 by arch              #+#    #+#             */
/*   Updated: 2025/02/05 13:55:55 by akulikov         ###   ########.fr       */
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