/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 17:48:40 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 18:24:38 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Constructing Weapon" << std::endl;
	return;
}

Weapon::~Weapon(void) {
	std::cout << "Destructing Weapon" << std::endl;
	return;
}

const std::string		Weapon::getType(void) const {
	return _type;
}

void					Weapon::setType(std::string type) {
	_type = type;
}
