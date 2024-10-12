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

int areaTriangle(Point const x1, Point const x2, Point const x3) {
    float res = x1.getX().toFloat() * (x2.getY().toFloat() - x3.getY().toFloat()) 
               + x2.getX().toFloat() * (x3.getY().toFloat() - x1.getY().toFloat()) 
               + x3.getX().toFloat() * (x1.getY().toFloat() - x2.getY().toFloat());
    if (res < 0)
        res *= -1;
    return (roundf(0.5 * res));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    int abp =  areaTriangle(a, b, point);
    int bcp =  areaTriangle(b, c, point);
    int cap =  areaTriangle(c, a, point);
    int abc =  areaTriangle(a, b, c);
     std::cout << abp << std::endl;
    std::cout << bcp << std::endl;
    std::cout << cap << std::endl;
    int res = abp + bcp + cap;

    if ((abc != res) || (abp == 0) || (bcp == 0) || (cap == 0))
        return (0);
    return (1);
}