/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:04:39 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/14 20:09:21 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed getArea(Point const a, Point const b, Point const c)
{
	Fixed result(
		(
			(a.getX() * (b.getY() - c.getY()))
			+ (b.getX() * (c.getY() - a.getY()))
			+ (c.getX() * (a.getY() - b.getY()))
		)
		* 0.5f
	);
	
	if (result < 0)
		result = result * -1;

	return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool result =  false;
	Fixed areaABC = getArea(a, b, c);
	Fixed areaABP = getArea(a, b, point);
	Fixed areaBCP = getArea(b, c, point);
	Fixed areaCAP = getArea(c, a, point);

	if (point != a && point != b && point != c)
	{
		if (areaABC == (areaABP + areaBCP + areaCAP))
			result = true;
	}

	return result;
}
