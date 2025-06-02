/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:43:43 by arch              #+#    #+#             */
/*   Updated: 2025/06/02 20:11:47 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include <cstdlib>
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog (void);
		Dog (const Dog& src);
		Dog& operator= (const Dog& src);
		virtual ~Dog (void);
		
		void makeSound(void)const;
		void readTheMind(void)const;
	private:
		Brain* _brain;
};
