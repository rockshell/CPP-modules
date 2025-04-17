/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:37:15 by arch              #+#    #+#             */
/*   Updated: 2024/12/27 20:57:47 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void	megaphone(std::string input) {
	for(std::size_t i = 0; i < input.size(); i++)
		input[i] = static_cast<char>(std::toupper(input[i]));
	std::cout << input;
}

int main(int argc, char **argv) {
	if (argc > 1)
	{
		for(int i = 1; i < argc; i++) {
			megaphone(argv[i]);
			if (i + 1 < argc)
				std::cout << ' ';
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
