/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 17:49:06 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 18:29:25 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : 
	_name(name),
	_weapon(weapon) {
	std::cout << "Constructing HumanA" << std::endl;
	return;
}

HumanA::~HumanA(void) {
	std::cout << "Destructing HumanA" << std::endl;
	return;
}

void		HumanA::attack(void) const {
	std::cout << _name << " attacks with his ";
	std::cout << _weapon.getType() << std::endl;
}
