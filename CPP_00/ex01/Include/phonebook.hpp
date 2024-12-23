/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:43:38 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/23 13:40:34 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "contact.hpp"

class	PhoneBook{
	public:
		int	Size;
		Contact FirstContact;
		Contact	LastContact;

		int	AddContact(std::string FirstName, std::string LastName, 
			std::string Nickname, std::string PhoneNumber, 
			std::string DarkestSecret);

		Contact SearchForContact(int Index);
		
};