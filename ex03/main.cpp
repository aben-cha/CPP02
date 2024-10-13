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
    Point const a(0, 0);
    Point const b(3, 0);
    Point const c(0, 3);
    Point const p(1, 1);

    std::cout << bsp(a, b, c, p) << std::endl;
    return 0;
}
