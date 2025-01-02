/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:49:58 by akulikov          #+#    #+#             */
/*   Updated: 2025/01/02 19:59:01 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string source, std::string to_find, std::string to_add) {
	size_t	source_i = source.find(to_find);
	size_t	source_j = 0;
	size_t	t_len = to_find.size();
	size_t 	s_len = source.size();
	std::string result;
	if (source_i != std::string::npos) {
		while (1)
		{
			result.append(source, source_j, source_i - source_j);
			result.append(to_add);
			source_i += t_len;
			source_j = source_i;
			source_i++;
			if (source_i < s_len && source.find(to_find, source_i) != std::string::npos) {
				source_i = source.find(to_find, source_i);
			}
			else {
				if (source_i < s_len) {
					result.append(source, source_j, s_len - source_j);
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

bool	is_file_exists(const std::string& name) {
	std::ifstream f(name.c_str());
	return (f.good());
}

int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}
	std::ifstream inputStream(argv[1]);
	if (!is_file_exists(std::string(argv[1]))) {
		std::cout << "File is unavailable." << std::endl;
		return (1);
	}
	std::string myText;
	std::string resultText;
	std::string toFind = argv[2];
	std::string toAdd = argv[3];
	std::ofstream outStream(std::string(argv[1]).append(".replace"));
	while (getline(inputStream, myText)) {
		resultText = replace(myText, toFind, toAdd);
		outStream << resultText << std::endl;
	}
	inputStream.close();
	outStream.close();
	return (0);
}