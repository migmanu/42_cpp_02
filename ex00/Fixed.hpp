/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:30:37 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:38:16 by jmigoya-         ###   ########.fr       */
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
	static const int _bits = 8;

  public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
