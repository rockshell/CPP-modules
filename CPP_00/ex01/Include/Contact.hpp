/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:44:20 by akulikov          #+#    #+#             */
/*   Updated: 2025/02/05 13:55:52 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{
	public:
		void SetFirstName (const std::string &Input);
		void SetLastName (const std::string &Input);
		void SetNickname (const std::string &Input);
		void SetPhoneNumber (const std::string &Input);
		void SetDarkestSecret (const std::string &Input);
		
		const std::string &GetFirstName() const;
		const std::string &GetLastName() const;
		const std::string &GetNickname() const;
		const std::string &GetPhoneNumber() const;
		const std::string &GetSecret() const;
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif