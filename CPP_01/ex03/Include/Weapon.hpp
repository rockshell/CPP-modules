/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:53:27 by akulikov          #+#    #+#             */
/*   Updated: 2024/12/26 17:01:18 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon {
	private:
		std::string _type;
	public:
		const std::string& getType() const;
		void setType(std::string name);

};

// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
// • A setType() member function that sets type using the new one passed as parameter.