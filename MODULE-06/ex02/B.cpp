/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:30:38 by pvilchez          #+#    #+#             */
/*   Updated: 2024/02/25 19:40:15 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	std::cout << "Class B created" << std::endl;
}

B::~B() { }

void B::identify()
{
	std::cout << "Class B" << std::endl;
}