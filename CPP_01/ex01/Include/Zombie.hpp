/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:52:52 by arch              #+#    #+#             */
/*   Updated: 2025/04/30 13:50:05 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	public:
		Zombie (void);
		~Zombie (void);

		void	announce(void);
		void	setName(std::string name);
	
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
