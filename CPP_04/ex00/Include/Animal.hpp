/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:58:26 by arch              #+#    #+#             */
/*   Updated: 2025/05/20 18:25:18 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal {
	public:
		Animal (void);
		Animal (const Animal& src);
		Animal& operator= (const Animal& src);
		~Animal (void);

		std::string getType(void)const;
		void virtual makeSound(void)const;
		
	protected:
		std::string _type;
};
