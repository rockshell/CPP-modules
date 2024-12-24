/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:28:27 by arch              #+#    #+#             */
/*   Updated: 2024/12/24 17:22:11 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

int	PhoneBook::addContact(std::string FirstName, std::string LastName, 
				std::string Nickname, std::string PhoneNumber, 
				std::string DarkestSecret)
{
	int	i;
	Contact NewContact;
	NewContact.SetFirstName(FirstName);
	NewContact.SetLastName(LastName);
	NewContact.SetNickname(Nickname);
	NewContact.SetPhoneNumber(PhoneNumber);
	NewContact.SetDarkestSecret(DarkestSecret);
	if (_phoneBookSize < 8)
	{
		_contacts[_phoneBookSize] = NewContact;
		i = _phoneBookSize;
		_phoneBookSize++;
	}
	else
	{
		_contacts[_oldestContact] = NewContact;
		i = _oldestContact;
		_oldestContact = (_oldestContact + 1) % 8;
	}
	return (i);
}

int PhoneBook::searchForContact(int Index, Contact *outContact) const
{
	if (Index < 0 || Index > 7 || Index > _phoneBookSize)
		return (1);
	*outContact = _contacts[Index];
	return(0);
}

int PhoneBook::getSize() const
{
	return (_phoneBookSize);
}