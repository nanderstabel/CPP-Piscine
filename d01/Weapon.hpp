/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 17:46:57 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 18:24:43 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

	Weapon(std::string type);
	~Weapon(void);

	const std::string		getType(void) const;
	void					setType(std::string type);

private:

	std::string		_type;

};

#endif
