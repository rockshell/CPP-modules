/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:44:20 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/20 19:15:02 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact{
	public:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
	private:
		std::string DarkSecret;
};