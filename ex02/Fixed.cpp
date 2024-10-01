/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:21:15 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 13:21:15 by aben-cha         ###   ########.fr       */
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
    fixedPoint = roundf(floatNbr * 256);
}

float Fixed::toFloat( void ) const {
    return ((float)fixedPoint / 256);
}
int Fixed::toInt( void ) const {
    return (fixedPoint / 256);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){ 
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed &rhs)
{
    return fixedPoint > rhs.fixedPoint;
}

bool Fixed::operator<(const Fixed &rhs) {
    return fixedPoint < rhs.fixedPoint;
}

bool  Fixed::operator>=(const Fixed &rhs) {
    return fixedPoint >= rhs.fixedPoint;
}

bool  Fixed::operator<=(const Fixed &rhs) {
    return fixedPoint <= rhs.fixedPoint;
}

bool  Fixed::operator==(const Fixed &rhs) {
    return fixedPoint == rhs.fixedPoint;
}

bool  Fixed::operator!=(const Fixed &rhs) {
    return fixedPoint != rhs.fixedPoint;
}

Fixed Fixed::operator+(const Fixed &rhs) {
    Fixed result;

    result.setRawBits(fixedPoint + rhs.fixedPoint);
    return (result);
}

Fixed Fixed::operator-(const Fixed &rhs) {
    Fixed result;
    result.setRawBits(fixedPoint - rhs.fixedPoint);
    return result;
}

Fixed Fixed::operator*(const Fixed &rhs) {
    Fixed result;
    result.setRawBits((fixedPoint * rhs.fixedPoint) / 256);
    return result;
}

Fixed Fixed::operator/(const Fixed &rhs) {
    Fixed result;
    result.setRawBits(((fixedPoint * 256) / rhs.fixedPoint) );
    return result;
}

Fixed& Fixed::operator++() {
    // ++result.fixedPoint;
    ++fixedPoint;
    return *this;
}

Fixed& Fixed::operator--() {
    // --result.fixedPoint;
    --fixedPoint;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp1;
    temp1.fixedPoint = fixedPoint;
    fixedPoint++;
    return temp1;
}

Fixed Fixed::operator--(int) {
    Fixed temp(fixedPoint);
    fixedPoint--;
    return temp;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
    // if (lhs < rhs)
    //     return lhs;
    if (lhs.fixedPoint < rhs.fixedPoint)
        return lhs;
    return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
    // if (lhs < rhs)
    if (lhs.fixedPoint < rhs.fixedPoint)
        return lhs;
    return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
    // if (lhs > rhs)
    if (lhs.fixedPoint > rhs.fixedPoint)
        return lhs;
    return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
    // if (lhs > rhs)
    if (lhs.fixedPoint > rhs.fixedPoint)
        return lhs;
    return rhs;
}