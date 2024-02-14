/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:12:13 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/14 17:01:11 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
	return;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	return;
}

Point::~Point(void)
{
	return;
}

// WARNING: Subject is probably flawed. Assignment operator
// cannot be overloaded reasonably if the members are const.
// Better not use. This implementation is just wayaround C++
// that might result in undefined behavior.
Point &Point::operator=(const Point &copy)
{
	const_cast<Fixed&>(this->_x) = copy._x;
    const_cast<Fixed&>(this->_y) = copy._y;
	return *this;
}

Fixed Point::getX(void) const
{
	return this->_x;
}

Fixed Point::getY(void) const
{
	return this->_y;
}
