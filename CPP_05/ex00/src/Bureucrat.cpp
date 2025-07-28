/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:27:40 by arch              #+#    #+#             */
/*   Updated: 2025/07/28 19:12:10 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureucrat.hpp"

Bureucrat::Bureucrat (void) {
	this->_name = "Basic Bob";
	this->_grade = 100;
	std::cout << "Bureucrat Basic Bob is ready for duty" << std::endl;
}

Bureucrat::Bureucrat (std::string name, int grade) {
	if (grade > MIN_GRADE)
		throw GradeTooLowException();
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	this->_name = name;
	this->_grade = grade;
	std::cout << "Bureucrat " << this->_name << " is ready for duty" << std::endl;
}

Bureucrat::Bureucrat (const Bureucrat &src) {
	this->_name = src._name;
	this->_grade = src._grade;
	std::cout << "Bureucrat " << this->_name << " was copy-constructed successfully" << std::endl; 
}

Bureucrat &Bureucrat::opreator= (const Bureucrat& src) {
	if (this != &src) {
		this->_name = src._name;
		this->_grade = src._grade;
	}
}

const std::string Bureucrat::getName() {
	return (this->_name);
}

unsigned int Bureucrat::getGrade() {
	return (this->_grade);
}