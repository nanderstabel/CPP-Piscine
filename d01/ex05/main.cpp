/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 16:34:20 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 17:41:13 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int		main(void)
{
	Human		bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return 0;
}
