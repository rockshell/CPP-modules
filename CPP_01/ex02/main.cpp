/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:29:04 by arch              #+#    #+#             */
/*   Updated: 2024/12/26 14:04:22 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;

	std::cout << &s << "\n";
	std::cout << &stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << s << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";

	return (0);
}