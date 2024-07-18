/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkwak <tkwak@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:08:47 by tkwak             #+#    #+#             */
/*   Updated: 2024/07/18 12:08:48 by tkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
	std::string s1 = "jason";
	std::string s2 = "irene";

    ClapTrap c1(s1);
	ClapTrap c2(s2);

	std::cout << std::endl;
	c1.beRepaired(10);

	std::cout << std::endl;
	c1.attack(s2);
	c2.takeDamage(5);

	std::cout << std::endl;
	c2.beRepaired(3);
	c2.beRepaired(2);

	std::cout << std::endl;
	c2.attack(s1);
	c1.takeDamage(10);

	std::cout << std::endl;
	c1.beRepaired(10);
	c1.attack(s2);

	std::cout << std::endl;
	c2.attack(s1);
	c1.takeDamage(5);
	return (0);
}
