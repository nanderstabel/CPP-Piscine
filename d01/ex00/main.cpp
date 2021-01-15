/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:21:45 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 21:21:11 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony	*mike = new Pony("Mike");

	mike->gallop(1, 5);
	mike->eat();
	mike->gallop(100, 100);
	mike->eat();
	delete mike;
}

void	ponyOnTheStack(void) {
	Pony	carl = Pony("Carl");

	carl.walk(3, 6);
	carl.gallop(10, 11);
	carl.eat();
	carl.walk(0, 0);
}

int		main() {
	std::cout << "Pony allocated on the heap:" << std::endl;
	ponyOnTheHeap();
	std::cout << "Pony allocated on the stack:" << std::endl;
	ponyOnTheStack();
	std::cout << "End of program." << std::endl;
	return 0;
}
