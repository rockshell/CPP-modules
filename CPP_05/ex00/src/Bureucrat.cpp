/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:27:40 by arch              #+#    #+#             */
/*   Updated: 2025/07/28 11:11:04 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

Bureucrat::Bureucrat (void) {
	this->_name = "Basic Bob";
	this->_grade = 100;
	std::cout << "Bureucrat Basic Bob is ready for duty" << std::endl;
}

Bureucrat::Bureucrat (std::string name, int grade) {
	
}