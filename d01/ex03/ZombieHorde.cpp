/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 23:57:40 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 16:21:34 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _hordeSize(N) {
	std::cout << "Constructing ZombieHorde" << std::endl;
	_horde = new Zombie [N];
	for (int i = 0; i < N; i++) {
		_horde[i].setName(_names[rand() % 10]);
		_horde[i].setType(_types[rand() % 2]);
	}
	return;
}

ZombieHorde::~ZombieHorde(void) {
	std::cout << "Destructing ZombieHorde" << std::endl;
	delete [] _horde;
	return;
}

void			ZombieHorde::announce(void) const {
	for (int i = 0; i < _hordeSize; i++)
		_horde[i].announce();
}

std::string ZombieHorde::_names[10] = {
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

std::string ZombieHorde::_types[2] = {
	"carnivore",
	"vegan"
};
