/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 21:27:58 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 21:38:46 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		memoryLeak(void) {
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
