/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 00:15:28 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 15:34:10 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(int N) {
	std::cout << "Constructing ZombieEvent" << std::endl;
	return;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "Destructing ZombieEvent" << std::endl;
	return;
}

void	ZombieEvent::setZombieType(std::string type) {
	 _type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, _type);
}

Zombie			*ZombieEvent::randomChump(void) {
	Zombie *zombie = new Zombie(_names[rand() % 10], _type);
	zombie->announce();
	return zombie;
}

std::string ZombieEvent::_names[10] = {
	"Malcom",
	"Eric",
	"Adrien",
	"Frank",
	"Richard",
	"Patrick",
	"Giovanni",
	"Bill",
	"Sam",
	"Rick"
};
