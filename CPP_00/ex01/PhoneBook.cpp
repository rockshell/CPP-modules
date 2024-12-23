/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:28:27 by arch              #+#    #+#             */
/*   Updated: 2024/12/23 20:12:40 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::addContact(std::string &FirstName, std::string &LastName, 
				std::string &Nickname, std::string &PhoneNumber, 
				std::string &DarkestSecret)
{
	Contact NewContact;
	NewContact.SetFirstName(FirstName);
	NewContact.SetLastName(LastName);
	NewContact.SetNickname(Nickname);
	NewContact.SetPhoneNumber(PhoneNumber);
	NewContact.SetDarkestSecret(DarkestSecret);
	if (_phoneBookSize == 0)
	{
		
	}
			
}