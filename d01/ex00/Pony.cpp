/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 20:27:35 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 21:25:21 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <math.h>

Pony::Pony(std::string name) : 
	name(name), 
	_x(0), 
	_y(0), 
	_energy(100) {
	std::cout << this->name << " is now your pony!" << std::endl;
	return;
}

Pony::~Pony(void) {
	std::cout << this->name << " ran away :(" << std::endl;
	return;
}

int		Pony::getEnergy(void) {
	return _energy;
}

void	Pony::walk(float x, float y) {
	int	distance = sqrt((_x - x)*(_x - x) + (_y - y)*(_y - y));

	_energy -= distance;
	_x = x;
	_y = y;
	std::cout << name << " is walking " << distance << " km" << std::endl;
	if (_energy < 20)
		std::cout << name << " is exhausted!" << std::endl;
	if (_energy < 0)
		_energy = 0;
}

void	Pony::gallop(float x, float y) {
	int	distance = sqrt((_x - x)*(_x - x) + (_y - y)*(_y - y)) * 1.5;

	_energy -= distance;
	_x = x;
	_y = y;
	std::cout << name << " is galloping " << distance << " km" << std::endl;
	if (_energy < 20)
		std::cout << name << " is exhausted!" << std::endl;
	if (_energy < 0)
		_energy = 0;
}

void	Pony::eat(void) {
	_energy += 50;
	std::cout << name << " is eating " << std::endl;
	if (_energy > 100)
		_energy = 100;
}
