/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:12:32 by akulikov          #+#    #+#             */
/*   Updated: 2025/02/05 12:59:27 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <cctype>
#include "PhoneBook.hpp"

bool is_string_blank(std::string Input) {
	if(Input.find_first_not_of(' ') != std::string::npos)
		return (1);
	return (0);
}

std::string	add_field_in_contact(std::string Instructions) {
	std::string Input;
	while (true)
	{
		std::cout << Instructions << std::endl;
		if (!std::getline(std::cin, Input)) {
			std::cout << "EOF reached or an error occurred." << std::endl;
			exit (1);
		}
		else if (Input.empty()) {
			std::cout << "Field can't be empty." << std::endl;
		}
		else if (is_string_blank(Input) == 0) {
			std::cout << "Field can't be blank." << std::endl;
		}
		else 
			break;
	}
	return (Input);
}

void	add_contact(PhoneBook *Book) {
	int	i;
	std::string InputFirstName;
	std::string InputLastName;
	std::string InputNickname;
	std::string InputPhoneNumber;
	std::string InputDarkestSecret;
	std::cout << "Don't use spaces, other breaking characters or bad words. Please be nice.\n";
	InputFirstName = add_field_in_contact("Enter the first name");
	InputLastName = add_field_in_contact("Enter the last name");
	InputNickname = add_field_in_contact("Enter the nickname");
	InputPhoneNumber = add_field_in_contact("Enter the phonenumber");
	InputDarkestSecret = add_field_in_contact("Enter the darkest secret");
	i = Book->addContact(InputFirstName, 
						InputLastName, 
						InputNickname,
						InputPhoneNumber, 
						InputDarkestSecret);
	std::cout << "Added contact, index is: " << i << "\n";
}

void	print_header() {
	std::cout << "---------------------------------------------\n";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRSTNAME" << "|";
	std::cout << std::setw(10) << std::right << "LASTNAME" << "|";
	std::cout << std::setw(10) << std::right << "NICKNAME" << "|" << "\n";
	std::cout << "---------------------------------------------\n";
}



void cut(std::string *Input) {
	if (Input->length() > 9)
	{
		Input->resize(9);
		Input->append(".");
	}
}

void	print_contact_in_row(int index, Contact *currentContact) {
	std::string firstName = currentContact->GetFirstName();
	std::string lastName = currentContact->GetLastName();
	std::string nickName = currentContact->GetNickname();

	cut(&firstName);
	cut(&lastName);
	cut(&nickName);

	std::cout << "|";
	std::cout << std::setw(10) << std::right << index << "|";
	std::cout << std::setw(10) << std::right << firstName << "|";
	std::cout << std::setw(10) << std::right << lastName << "|";
	std::cout << std::setw(10) << std::right << nickName << "|";
	std::cout << "\n";
}

void	print_contact_details(int index, Contact *currentContact) {
	std::cout << "INDEX: " << index << "\n";
	std::cout << "FIRSTNAME: " << currentContact->GetFirstName() << "\n";
	std::cout << "LASTNAME: " << currentContact->GetLastName() << "\n";
	std::cout << "NICKNAME: " << currentContact->GetNickname() << "\n";
	std::cout << "PHONENUMBER: " << currentContact->GetPhoneNumber() << "\n";
	std::cout << "[CLASSIFIED]: " << currentContact->GetSecret() << "\n";
}

void	search_for_contact(PhoneBook *Book) {
	std::string	input;
	int size = Book->getSize();
	Contact	current_contact;
	print_header();
	for (int i = 0; i < size; i++)
	{
		if (Book->searchForContact(i, &current_contact) == 0)
			print_contact_in_row(i, &current_contact);
	}
	std::cout << "Enter the index:\n";
	std::getline(std::cin, input);
	if (input.length() == 1 && std::isdigit(input[0]))
	{
		int i = input[0] - '0';
		if (i >= Book->getSize() || Book->searchForContact(i, &current_contact) == 1)
			std::cout << "No such index exists\n";
		else
			print_contact_details(i, &current_contact);	
	}
	else
		std::cout << "Wrong index\n";
}

int	main() {
	std::string Input;
	PhoneBook CurrentPhoneBook;
	while (true)
	{
		std::cout << "Type the command:\n";
		if (!std::getline(std::cin, Input)) {
			std::cout << "EOF reached or an error occurred." << std::endl;
			exit (1);
		}
		if (Input == "ADD")
			add_contact(&CurrentPhoneBook);
		else if (Input == "SEARCH")
			search_for_contact(&CurrentPhoneBook);
		else if (Input == "EXIT")
			break;
		else
			std::cout << "Wrong command, please try again" << std::endl;
	}
	std::cout << "Goodbye\n";
	exit (0);
}