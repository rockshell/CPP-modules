/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:34:29 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:41:44 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat (void);
		Cat (const Cat& src);
		Cat& operator= (const Cat& src);
		~Cat (void);
		
		void makeSound(void)const;
};
