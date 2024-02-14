/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:30:37 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/14 16:58:58 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
  public:
	// Constructors-Destructors
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy); // Copy constructor
	~Fixed(void);

	// Member functions
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	// Static member functions
	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);

	// Overloaded operators
	Fixed &operator=(const Fixed &copy);
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator<(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &copy) const;
	Fixed operator*(const Fixed &copy) const;
	Fixed operator/(const Fixed &copy) const;
	Fixed &operator++(); // pre-increment
	Fixed operator++(int i); // post-increment
	Fixed &operator--(); // pre-decrement
	Fixed operator--(int i); // post-decrement

  private:
	int _value;
	static const int _fractionalBits = 8;

};

std::ostream	&operator<<(std::ostream &os, const Fixed &fix);

#endif
