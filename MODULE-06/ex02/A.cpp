/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:29:22 by pvilchez          #+#    #+#             */
/*   Updated: 2024/02/25 19:40:11 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	std::cout << "Class A created" << std::endl;
}

A::~A() { }

void A::identify()
{
	std::cout << "Class A" << std::endl;
}
