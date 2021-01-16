/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 16:48:03 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 17:39:32 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	std::cout << "Constructing Human" << std::endl;
	return;
}

Human::~Human(void) {
	std::cout << "Destructing Human" << std::endl;
	return;
}

std::string		Human::identify(void) const {
	return _brain.identify();
}

const Brain		&Human::getBrain(void) const {
	return _brain;
}
