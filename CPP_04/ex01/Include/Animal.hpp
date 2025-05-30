/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:58:26 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:41:41 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
	public:
		Animal (void);
		Animal (const Animal& src);
		Animal& operator= (const Animal& src);
		virtual ~Animal (void);

		std::string getType(void)const;
		virtual void makeSound(void)const;
		
	protected:
		std::string _type;
};
