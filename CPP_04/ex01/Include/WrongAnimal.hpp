/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:41:08 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 17:45:23 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal (void);
		WrongAnimal (const WrongAnimal& src);
		WrongAnimal& operator= (const WrongAnimal& src);
		virtual ~WrongAnimal (void);

		std::string getType(void)const;
		void makeSound(void)const;
		
	protected:
		std::string _type;
};