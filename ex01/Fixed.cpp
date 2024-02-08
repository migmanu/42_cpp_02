/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:35:21 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 18:49:17 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

	_value = 0;

	return;
}

Fixed::Fixed(const int new_value)
{
	std::cout << "Int constructor called" << std::endl;

	_value = new_value << _fractionalBits;

	return;
}

Fixed::Fixed(const float new_value)
{
	std::cout << "Float constructor called" << std::endl;

	_value = static_cast<int>(new_value * (1 << _fractionalBits));

	return;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;

	_value = copy.getRawBits();

	return;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return _value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const
{
	return _value >> _fractionalBits;
}

std::ostream&	operator<<(std::ostream &os, const Fixed &fix)
{
	os << fix.toFloat();
	return os;
}

