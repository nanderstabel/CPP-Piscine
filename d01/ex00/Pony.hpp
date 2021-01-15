/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:27:34 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 21:01:05 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PNY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

public:

	std::string		name;

	Pony(std::string name);
	~Pony(void);

	int				getEnergy(void);
	void			walk(float x, float y);
	void			gallop(float x, float y);
	void			eat(void);

private:

	float			_x;
	float			_y;
	int				_energy;

};

#endif
