/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 17:20:54 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 17:21:13 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Constructing Brain" << std::endl;
	std::ostringstream address;

	address << (void const *)this;
	_identity = address.str();
	for (int i = 2; i < _identity.size(); i++)
		_identity[i] = std::toupper(_identity[i]);
	return;
}

Brain::~Brain(void) {
	std::cout << "Destructing Brain" << std::endl;
	return;
}

std::string		Brain::identify(void) const {
	return _identity;
}
