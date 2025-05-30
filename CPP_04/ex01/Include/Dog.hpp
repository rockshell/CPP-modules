/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:43:43 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:41:48 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog (void);
		Dog (const Dog& src);
		Dog& operator= (const Dog& src);
		~Dog (void);
		
		void makeSound(void)const;
};
