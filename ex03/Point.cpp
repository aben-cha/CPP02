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
    (void)(rhs);
    return *this;
}

Point::~Point() {
}

Fixed Point::getX() const {
    return x;
}
Fixed Point::getY() const {
    return y;
}