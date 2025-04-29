/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:03:22 by arch              #+#    #+#             */
/*   Updated: 2025/04/29 17:35:12 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl newHarl;

	newHarl.complain("DEBUG");
	newHarl.complain("INFO");
	newHarl.complain("WARNING");
	newHarl.complain("ERROR");
	
	return(0);
}