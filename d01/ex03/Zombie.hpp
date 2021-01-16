/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 21:42:11 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 16:19:09 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	Zombie(void);
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void		announce(void) const;
	void		setName(std::string name);
	void		setType(std::string name);

private:

	std::string				_name;
	std::string				_type;

};

#endif
