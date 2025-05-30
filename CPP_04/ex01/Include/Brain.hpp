/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:05:51 by arch              #+#    #+#             */
/*   Updated: 2025/05/30 18:10:19 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain {
	public:
		Brain ();
		Brain (const Brain& src);
		Brain& operator= (const Brain& src);
		~Brain ();

		std::string ideas[100];
};
