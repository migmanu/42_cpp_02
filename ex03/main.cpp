/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:29:47 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/13 20:18:34 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed left(5.05f);
	Fixed right(2);

	std::cout << "Incrementing:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "Decrementing:" << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "Multiplication:" << std::endl;
	Fixed const multi(left * right);
	std::cout << left << " times " << right << " = " << multi << std::endl;
	std::cout << std::endl;

	std::cout << "Division:" << std::endl;
	Fixed const div(left / right);
	std::cout << left << " divided by " << right << " = " << div << std::endl;
	std::cout << std::endl;

	std::cout << "Addition:" << std::endl;
	Fixed const adding(left + right);
	std::cout << left << " plus " << right << " = " << adding << std::endl;
	std::cout << std::endl;

	std::cout << "Substraction:" << std::endl;
	Fixed const minus(left - right);
	std::cout << left << " minus " << right << " = " << minus << std::endl;
	std::cout << std::endl;

	std::cout << "Minmaxing:" << std::endl;
	Fixed f1(4.77f);
	Fixed f2(4.17f);
	std::cout
		<< "Max between " << f1 << " and " << f2 << " is: " 
		<< Fixed::max(f1, f2) << std::endl;
	std::cout
		<< "Min between " << f1 << " and " << f2 << " is: " 
		<< Fixed::min(f1, f2) << std::endl;
	std::cout << std::endl;

	std::cout << "Const minmaxing:" << std::endl;
	Fixed c_f1(2.77f);
	Fixed c_f2(2.17f);
	std::cout
		<< "Max between " << c_f1 << " and " << c_f2 << " is: " 
		<< Fixed::max(c_f1, c_f2) << std::endl;
	std::cout
		<< "Min between " << c_f1 << " and " << c_f2 << " is: " 
		<< Fixed::min(c_f1, c_f2) << std::endl;
	std::cout << std::endl;

	std::cout << "While loop:" << std::endl;
	Fixed i(0);
	Fixed end(0.042f);
	std::cout << "max value: " << end << std::endl;
	while (i < end)
	{
		std::cout << "i is: " << i++ << std::endl;
	}

	return (0);
}
