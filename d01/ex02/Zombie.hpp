/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 21:42:11 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 22:20:05 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	Zombie(std::string name, std::string type);
	~Zombie(void);

	void		announce(void) const;

private:

	const std::string		_name;
	const std::string		_type;

};

#endif
