/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulikov <akulikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:23:31 by akulikov          #+#    #+#             */
/*   Updated: 2025/05/07 12:58:19 by akulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap Alpha("Alpha");
	ClapTrap Beta(Alpha);
	ClapTrap Gamma = Alpha;
	ClapTrap Standard;

	Alpha.attack("Beta");

	return (0);
}