/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:52:52 by arch              #+#    #+#             */
/*   Updated: 2024/12/26 13:20:20 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	public:
		Zombie (void);
		~Zombie ();

		void	announce(void);
		void	setName(std::string name);
	
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
