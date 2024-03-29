/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:08:40 by pvilchez          #+#    #+#             */
/*   Updated: 2024/02/17 00:17:02 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("Paco");
	ClapTrap clap2("Pepe");

	clap1.attack("Pepe");
	clap1.takeDamage(5);
	clap1.beRepaired(6);
	clap2.attack("Paco");
	clap2.takeDamage(7);
	clap2.beRepaired(8);
	return 0;
}