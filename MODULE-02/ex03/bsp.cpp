/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:53:33 by pvilchez          #+#    #+#             */
/*   Updated: 2024/02/07 20:27:00 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed abs_val(Fixed val)
{
	if (val < 0)
		return (val * -1);
	return (val);
}

static Fixed t_area(Point const a, Point const b, Point const c)
{
	Fixed res;
	
	Fixed a_x = a.getX();
	Fixed a_y = a.getY();
	Fixed b_x = b.getX();
	Fixed b_y = b.getY();
	Fixed c_x = c.getX();
	Fixed c_y = c.getY();
	res = ((a_x * (b_y - c_y)) + (b_x * (c_y - a_y)) + (c_x * (a_y - b_y))) / 2;

	return (abs_val(res));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed total_area;
	Fixed area_1;
	Fixed area_2;
	Fixed area_3;
	const Fixed margin = Fixed(0.000001f);

	total_area = t_area(a, b, c);
	area_1 = t_area(a, b, point);
	area_2 = t_area(a, c, point);
	area_3 = t_area(b, c, point);

	std::cout << "Total area: " << (float)total_area.toFloat() << std::endl;
	std::cout << "Area 1 + Area 2 + Area 3: " << area_1.toFloat() + area_2.toFloat() + area_3.toFloat() << std::endl;

	if (abs_val(total_area - (area_1 + area_2 + area_3)) < margin)
		return (true);
	return (false);
}
