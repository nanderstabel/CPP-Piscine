/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 22:20:46 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 23:26:08 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <stdlib.h>
# include "Zombie.hpp"

class ZombieEvent {

public:

	ZombieEvent(void);
	~ZombieEvent(void);

	void			setZombieType(std::string type);
	Zombie			*newZombie(std::string name);
	Zombie			*randomChump(void);

private:

	static std::string	_names[10];		
	std::string			_type;

};

#endif
