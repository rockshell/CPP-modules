/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:49:58 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/30 17:37:02 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string source, std::string to_find, std::string to_add) {
	size_t	i = source.find(to_find);
	size_t	j = 0;
	size_t	len = source.size();
	std::string result;
	if (i != std::string::npos) {
		while (1)
		{
			result.append(source, j, i - j);
			result.append(to_add);
			std::cout << result << std::endl;
			j = i;
			i++;
			if (i < len && source.find(to_find, i) != std::string::npos) {
				i = source.find(to_find, i);
			}
			else {
				if (i < len) {
					result.append(source, j, len - j);
				}
				break;
			}
		}
	}
	else {
		return (source);
	}
	return (result);
}

int main() {
	std::string myText;
	std::string resultText;
	std::string toFind = "or";
	std::string toAdd = "aaaaaaa";
	std::ifstream inputStream("in.txt");
	std::ofstream outStream("out.txt");
	while (getline(inputStream, myText)) {
		resultText = replace(myText, toFind, toAdd);
		outStream << resultText << std::endl;
	}
	inputStream.close();
	outStream.close();
	return (0);
}