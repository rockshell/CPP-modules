/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:05:15 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/24 11:07:51 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::SetFirstName (const std::string &Input) {
	_firstName = Input;	
}


void Contact::SetLastName (const std::string &Input) {
	_lastName = Input;
}

void Contact::SetNickname (const std::string &Input) {
	_nickname = Input;	
}

void Contact::SetPhoneNumber (const std::string &Input) {
	_phoneNumber = Input;	
}

void Contact::SetDarkestSecret (const std::string &Input) {
	_darkestSecret = Input;	
}

const std::string &Contact::GetFirstName() const {
	return (_firstName);
}

const std::string &Contact::GetLastName() const {
	return (_lastName);
}

const std::string &Contact::GetNickname() const {
	return (_nickname);
}

const std::string &Contact::GetPhoneNumber() const {
	return (_phoneNumber);
}
