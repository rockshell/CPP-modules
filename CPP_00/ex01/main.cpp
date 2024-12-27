/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:12:32 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/27 20:43:26 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void	add_contact(PhoneBook *Book)
{
	int	i;
	std::string InputFirstName;
	std::string InputLastName;
	std::string InputNickname;
	std::string InputPhoneNumber;
	std::string InputDarkestSecret;
	std::cout << "Don't use spaces, other breaking characters or bad words. Please be nice.\n";
	std::cout << "Enter the first name:\n";
	std::getline(std::cin, InputFirstName);
	std::cout << "Enter the last name:\n";
	std::getline(std::cin, InputLastName);
	std::cout << "Enter the nickname:\n";
	std::getline(std::cin, InputNickname);
	std::cout << "Enter the phonenumber:\n";
	std::getline(std::cin, InputPhoneNumber);
	std::cout << "Enter the darkest secret:\n";
	std::getline(std::cin, InputDarkestSecret);
	i = Book->addContact(InputFirstName, 
						InputLastName, 
						InputNickname,
						InputPhoneNumber, 
						InputDarkestSecret);
	std::cout << "Added contact, index is: " << i << "\n";
}

void	print_header()
{
	std::cout << "---------------------------------------------\n";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRSTNAME" << "|";
	std::cout << std::setw(10) << std::right << "LASTNAME" << "|";
	std::cout << std::setw(10) << std::right << "NICKNAME" << "|" << "\n";
	std::cout << "---------------------------------------------\n";
}

void cut(std::string *Input)
{
	if (Input->length() > 9)
	{
		Input->resize(9);
		Input->append(".");
	}
}

void	print_contact_in_row(int index, Contact *currentContact)
{
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

void	print_contact_details(int index, Contact *currentContact)
{
	std::cout << "INDEX: " << index << "\n";
	std::cout << "FIRSTNAME: " << currentContact->GetFirstName() << "\n";
	std::cout << "LASTNAME: " << currentContact->GetLastName() << "\n";
	std::cout << "NICKNAME: " << currentContact->GetNickname() << "\n";
	std::cout << "PHONENUMBER: " << currentContact->GetPhoneNumber() << "\n";
	std::cout << "[CLASSIFIED]: " << currentContact->GetSecret() << "\n";
}

void	search_for_contact(PhoneBook *Book)
{
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

int	main()
{
	std::string Input;
	PhoneBook CurrentPhoneBook;
	while (true)
	{
		std::cout << "Type the command:\n";
		if (!std::getline(std::cin, Input)) {
			std::cout << "EOF reached or an error occurred." << std::endl;
			break;
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