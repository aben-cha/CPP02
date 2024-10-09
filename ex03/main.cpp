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
    return 0;
}
