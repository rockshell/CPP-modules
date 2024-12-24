/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arch <arch@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:43:38 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/24 17:17:48 by arch             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

class	PhoneBook{
	public:
		PhoneBook() {
			_phoneBookSize = 0;
			_oldestContact = 0;
		};
		int	addContact(const std::string FirstName, 
				const std::string LastName, 
				const std::string Nickname, 
				const std::string PhoneNumber, 
				const std::string DarkestSecret);

		int searchForContact(int Index, Contact *outContact) const;
		
		int	getSize() const;
	private:
		int	_phoneBookSize;
		int	_oldestContact;
		Contact _contacts[8];
};