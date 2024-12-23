/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:05:15 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/23 19:59:11 by akulikov         ###   ########.fr       */
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

const std::string& Contact::GetFirstName() {
	return (_firstName);
}

const std::string& Contact::GetLastName() {
	return (_lastName);
}

const std::string& Contact::GetNickname() {
	return (_nickname);
}

const std::string& Contact::GetPhoneNumber() {
	return (_phoneNumber);
}