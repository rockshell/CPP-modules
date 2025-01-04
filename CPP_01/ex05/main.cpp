/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:03:22 by arch              #+#    #+#             */
/*   Updated: 2025/01/04 11:38:01 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Harl.hpp"

int main() {
	Harl newHarl;

	std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

	for (size_t i = 0; i < 999; i++)
	{
		int	l = rand() % 4;
		std::string s = levels[l];
		newHarl.complain(s);
	}
	
	return(0);
}