/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:49:31 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 14:49:31 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point create_vector(Point const a, Point const b) {
    float x;
    float y;
    
    x = b.getX().toFloat() - a.getX().toFloat();
    y = b.getY().toFloat() - a.getY().toFloat();
    return Point(x, y);
}

int crossProduct(Point const v1, Point const v2) {
    int res;

    res = (v1.getX().toInt() * v2.getY().toInt()) - (v1.getY().toInt() * v2.getX().toInt());
    return res;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    // if (a==p || b== p|| c==p)
    //     return flase;
    Point ab = create_vector(a, b);
    Point ap = create_vector(a, point);

    Point ca = create_vector(c, a);
    Point cp = create_vector(c, point);

    Point bc = create_vector(b, c);
    Point bp = create_vector(b, point);

    if (crossProduct(ab, ap) > 0
        && crossProduct(ca, cp) > 0
        && crossProduct(bc, bp) > 0)
        return true;
    if (crossProduct(ab, ap) < 0
        && crossProduct(ca, cp) < 0
        && crossProduct(bc, bp) < 0)
        return true;
    if (crossProduct(ab, ap) == 0
        || crossProduct(ca, cp) == 0
        || crossProduct(bc, bp) == 0)
        return false;
    return false;
}