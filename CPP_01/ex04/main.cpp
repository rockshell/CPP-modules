/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:49:58 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/27 17:00:59 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main() {
	std::ofstream myfile;
	myfile.open("example.txt");
	if (myfile.bad()) {
		std::cout << "shit\n";	
	}
	else {
		myfile << "Lorem ipsum\n";
	}
	myfile.close();
	return (0);
}