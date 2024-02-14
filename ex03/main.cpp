/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:29:47 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/14 17:14:16 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(-3.1f, -3);
	Point b(3, 3);
	Point c(0, 6);
	Point point(-3, 0);

	std::cout << "Point is " << (bsp(a, b, c, point) ? "" : "NOT ") << "inside the triangle" << std::endl;
	return (0);
}
