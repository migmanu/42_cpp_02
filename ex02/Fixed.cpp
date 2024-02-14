/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:35:21 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/14 11:41:25 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;

	return;
}

Fixed::Fixed(const int new_value)
{
	_value = new_value << _fractionalBits;

	return;
}

Fixed::Fixed(const float new_value)
{
	float scaledValue = (new_value * (1 << _fractionalBits));
	_value = static_cast<int>(roundf(scaledValue));

	return;
}

Fixed::Fixed(const Fixed &copy)
{
	_value = copy.getRawBits();

	return;
}

Fixed::~Fixed()
{
	return;
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;

	return;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _value >> _fractionalBits;
}

// STATIC MEMBERS

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 <= f2 ? f1 : f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return (f1 <= f2 ? f1 : f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 >= f2 ? f1 : f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return (f1 >= f2 ? f1 : f2);
}

// OVERLOADED OPERATORS

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this == &copy)
		return *this;

	_value = copy._value;

	return *this;
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (*this)._value == rhs._value;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return !(*this == rhs);
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return _value < rhs._value;
}
bool Fixed::operator<=(const Fixed &rhs) const
{
	return *this < rhs || *this == rhs;
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return !(*this <= rhs);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return !(*this < rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed result((*this).toFloat() + rhs.toFloat());

	return result;
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed result((*this).toFloat() - rhs.toFloat());

	return result;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed result((*this).toFloat() * rhs.toFloat());

	return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	if (rhs._value == 0)
	{
		std::cout << "Cannot divide by zero!" << std::endl;
		return *this;
	}
	Fixed result((*this).toFloat() / rhs.toFloat());

	return result;
}

// pre-increment
Fixed &Fixed::operator++()
{
	(*this)._value += 1;

	return *this;
}

// post-increment
Fixed Fixed::operator++(int i)
{
	(void)i; // Avoid unused parameter warning
	Fixed tmp(*this);
	operator++();

	return tmp;
}

// pre-decrement
Fixed &Fixed::operator--()
{
	(*this)._value -= 1;

	return *this;
}

// post-decrement
Fixed Fixed::operator--(int i)
{
	(void)i; // Avoid unused parameter warning
	Fixed tmp(*this);
	operator--();

	return tmp;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fix)
{
	os << fix.toFloat();
	return os;
}
