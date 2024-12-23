/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:43:38 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/23 20:23:40 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

class	PhoneBook{
	public:
		int	addContact(std::string &FirstName, std::string &LastName, 
				std::string &Nickname, std::string &PhoneNumber, 
				std::string &DarkestSecret);

		const Contact &searchForContact(int Index) const;
	private:
		int	_phoneBookSize;
		Contact _contacts[8];
};