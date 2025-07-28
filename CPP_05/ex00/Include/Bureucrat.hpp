/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:27:35 by arch              #+#    #+#             */
/*   Updated: 2025/07/28 11:47:03 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureucrat {
    public:
        Bureucrat (void);
		Bureucrat (std::string name, int grade);
        Bureucrat (const Bureucrat& src);
        Bureucrat& opreator= (const Bureucrat& src);
        ~Bureucrat (void);

		const std::string getName();
		unsigned int getGrade();
		void increaseGrade();
		void decreaseGrade();
	
	private:
		const std::string _name;
		unsigned int _grade;
};


class GradeTooHighException : public std::exception {
	const 
} 
Bureaucrat::GradeTooLowException