/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:30:37 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/12 19:43:15 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>

class Fixed
{
  private:
	int _value;
	static const int _fractionalBits = 8;

  public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed &operator=(const Fixed &copy);
	Fixed &operator==(const Fixed &copy);
	Fixed &operator>(const Fixed &copy);
	Fixed &operator>=(const Fixed &copy);
	Fixed &operator<(const Fixed &copy);
	Fixed &operator<=(const Fixed &copy);
	Fixed &operator!=(const Fixed &copy);
	Fixed &operator+(const Fixed &copy);
	Fixed &operator-(const Fixed &copy);
	Fixed &operator*(const Fixed &copy);
	Fixed &operator/(const Fixed &copy);
	Fixed &operator++(); // pre-increment
	Fixed &operator--(); // pre-decrement
	Fixed &operator++(int i); // post-increment
	Fixed &operator--(int i); // post-decrement
};

std::ostream&	operator<<(std::ostream &os, const Fixed &fix);

#endif
