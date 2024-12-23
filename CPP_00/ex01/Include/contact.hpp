/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:44:20 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/23 16:01:08 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact{
	public:
		std::string SetFirstName (std::string Input);
		std::string SetLastName (std::string Input);
		std::string Set (std::string Input);
		std::string Set (std::string Input);
		std::string Set (std::string Input);
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkSecret;
};