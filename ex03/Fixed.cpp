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
    fixedPoint = copy.fixedPoint;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
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
    fixedPoint = intNbr * 256 + 0; // or fixedPoint = intNbr << 256
}

Fixed::Fixed(const float floatNbr) {
    // int integerPart;

    // integerPart = floatNbr;
    // fixedPoint = integerPart * 256 + (floatNbr - integerPart) * 256; // floatNbr * 256
    fixedPoint = roundf(floatNbr * 256);
}

float Fixed::toFloat( void ) const {
    return ((float)fixedPoint / 256);
}
int Fixed::toInt( void ) const {
    return (fixedPoint / 256);
}

std::ostream& operator<<(std::ostream &os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}