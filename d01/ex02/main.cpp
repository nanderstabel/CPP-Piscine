/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 21:42:02 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 23:51:10 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	event;

	event.setZombieType("vegan");
	
	Zombie *zombie = event.newZombie("Nander");
	zombie->announce();
	delete zombie;
	event.setZombieType("carnivore");
	event.randomChump();
	return 0;
}

