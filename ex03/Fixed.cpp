/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:49:47 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 14:49:47 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

Fixed::Fixed() : fixedPoint(0) {
}

Fixed::Fixed(const Fixed& copy) {
    Fixed::operator=(copy);
}

Fixed &Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs)
        fixedPoint = rhs.fixedPoint;
    return *this;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits( void ) const {
    return fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    fixedPoint = raw;
}

Fixed::Fixed(const int intNbr) {
    fixedPoint = intNbr << fractionalBit;
}

Fixed::Fixed(const float floatNbr) {
    fixedPoint = roundf(floatNbr * (1 << fractionalBit));
}

float Fixed::toFloat( void ) const {
    return ((float)fixedPoint / (1 << fractionalBit));
}

int Fixed::toInt( void ) const {
    return (fixedPoint / (1 << fractionalBit));
}

std::ostream& operator<<(std::ostream &os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}