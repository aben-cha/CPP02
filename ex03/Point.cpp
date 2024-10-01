/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:50:01 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 14:50:01 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){
}

Point::Point(const float x, const float y) : x(x), y(y) {
}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {
}

Point& Point::operator=(const Point& rhs) {
    if (this != &rhs) {
        // const attributes cannot be assigned
        // so we do nothing here
    }
    return *this;
}
Point::~Point() {
    // std::cout << "Destructor called." << std::endl;
}

Fixed Point::getX() const {
    return x;
}
Fixed Point::getY() const {
    return y;
}