/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:12:57 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/14 20:07:13 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <ostream>

#include "Fixed.hpp"

class Point
{
  public:
	// Constructors-Destructors
	Point(void);
	Point(const Fixed x, const Fixed y);
	Point(const Point &copy); // Copy constructor
	~Point(void);

	// Operator overloads
	Point &operator=(const Point &copy);
	bool operator==(const Point &rhs) const;
	bool operator!=(const Point &rhs) const;

	// Member functions
	Fixed getX(void) const;
	Fixed getY(void) const;

  private:
	const Fixed _x;
	const Fixed _y;
};

#endif
