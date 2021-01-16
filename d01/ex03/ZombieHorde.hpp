/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 00:15:02 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 16:21:47 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <stdlib.h>
# include "Zombie.hpp"

class ZombieHorde {

public:

	ZombieHorde(int N);
	~ZombieHorde(void);
	
	void				announce(void) const;

private:

	const unsigned int 	_hordeSize;
	static std::string	_names[10];
	static std::string	_types[2];	
	Zombie				*_horde;

};

#endif
