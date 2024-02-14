/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:29:47 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/14 19:53:55 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(1, 1);
	Point b(5, 1);
	Point c(3, 5);
	Point pointIn(3, 3);
	Point pointOut(6, 6);
	Point pointEdge(5, 1);

	std::cout << "PointIn is " << (bsp(a, b, c, pointIn) ? "" : "NOT ") << "inside the triangle" << std::endl;
	std::cout << "PointOut is " << (bsp(a, b, c, pointOut) ? "" : "NOT ") << "inside the triangle" << std::endl;
	std::cout << "PointEdge is " << (bsp(a, b, c, pointEdge) ? "" : "NOT ") << "inside the triangle" << std::endl;
	return (0);
}
