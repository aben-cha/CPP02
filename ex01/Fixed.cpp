/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:13:56 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 13:13:56 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

Fixed::Fixed() : fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
    fixedPoint = copy.fixedPoint;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        fixedPoint = rhs.fixedPoint;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    fixedPoint = raw;
}

Fixed::Fixed(const int intNbr) {
    fixedPoint = intNbr * 256 + 0; // or fixedPoint = intNbr << 256
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNbr) {
    // int integerPart;

    // integerPart = floatNbr;
    // fixedPoint = integerPart * 256 + (floatNbr - integerPart) * 256; // floatNbr * 256
    fixedPoint = roundf(floatNbr * 256);
    std::cout << "Float constructor called" << std::endl;
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


