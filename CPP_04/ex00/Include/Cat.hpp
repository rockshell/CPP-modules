/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:34:29 by arch              #+#    #+#             */
/*   Updated: 2025/05/20 18:16:26 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat (void);
		Cat (const Cat& src);
		Cat& operator= (const Cat& src);
		~Cat (void);
		
		void makeSound(void);
};
