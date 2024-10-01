/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:49:24 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/01 14:49:24 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    Point const a(0.5, 2.5);
    Point const b(3.5, 1.5);
    Point const c(2.0, 4.0);
    Point const p(2.5, 2.0);

    std::cout << "bsp : " << bsp(a, b, c, p) << std::endl;
    
    // std::cout << "b("<<b.getX() << "," << b.getY() << ")"  << std::endl;
    // std::cout << "a("<<a.getX() << "," << a.getY() << ")"  << std::endl;
    // std::cout << "c("<<c.getX() << "," << c.getY() << ")"  << std::endl;
    // std::cout << "p("<<p.getX() << "," << p.getY() << ")"  << std::endl;

    // Fixed x1(3);
    // Fixed y1(2);
    // Point p1(x1.toFloat(), y1.toFloat());
    // Point p2(p1); // Copy constructor
    // Point p3;
    // p3 = p1; // Assignment operator (does nothing for const)

    // std::cout << "Point p1: (" << p1.getX() << ", " << p1.getY() << ")\n";
    // std::cout << "Point p2: (" << p2.getX() << ", " << p2.getY() << ")\n";
    // std::cout << "Point p3: (" << p3.getX() << ", " << p3.getY() << ")\n";
    return 0;
}
