/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 21:58:03 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 16:19:29 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Constructing Zombie" << std::endl;
	return;
}

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

void		Zombie::setName(std::string name) {
	_name = name;
}

void		Zombie::setType(std::string type) {
	_type = type;
}
