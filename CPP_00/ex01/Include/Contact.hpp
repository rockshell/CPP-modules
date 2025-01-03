/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:44:20 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/25 12:39:03 by arch             ###   ########.fr       */
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