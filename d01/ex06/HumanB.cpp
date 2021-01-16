/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 17:49:20 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 18:38:11 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "Constructing HumanB" << std::endl;
	return;
}

HumanB::~HumanB(void) {
	std::cout << "Destructing HumanB" << std::endl;
	return;
}

void		HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void		HumanB::attack(void) const {
	std::cout << _name << " attacks with his ";
	std::cout << _weapon->getType() << std::endl;
}
