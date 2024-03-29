/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:08:40 by pvilchez          #+#    #+#             */
/*   Updated: 2024/02/15 17:31:28 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clap("Paco");
	clap.attack("Pepe");
	clap.takeDamage(10);
	clap.beRepaired(5);

	std::cout << std::endl;

	ScavTrap scav("Pepe");
	scav.attack("Pepe");
	scav.guardGate();

	std::cout << std::endl;
	
	FragTrap frag("Tito");
	frag.attack("Paco");
	frag.highFivesGuys();

	std::cout << std::endl;
	
	DiamondTrap diamond("Perla");
	diamond.attack("Paco");
	diamond.whoAmI();

	std::cout << std::endl;
	
	return 0;
}