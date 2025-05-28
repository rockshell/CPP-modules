/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:43:43 by arch              #+#    #+#             */
/*   Updated: 2025/05/20 18:20:18 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog& src);
		Dog& operator= (const Dog& src);
		~Dog(void);
		
		void makeSound(void);
};
