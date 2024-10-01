/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:50:06 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 14:50:06 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& copy);
        Point& operator=(const Point& rhs);
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
};

Point create_vector(Point const a, Point const b);
int crossProduct(Point const v1, Point const v2);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif