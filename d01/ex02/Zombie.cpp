/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 21:58:03 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 23:52:29 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "Constructing Zombie" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Destructing Zombie" << std::endl;
	return;
}

void	Zombie::announce(void) const {
	std::cout << "<" << _name << " (" <<_type << ")> ";
	if (_type == "carnivore")
		std::cout << "Braiiiiiiinnnssss..." << std::endl;
	else if (_type == "vegan")
		std::cout << "Graiiiiiiinnnssss..." << std::endl;
}
