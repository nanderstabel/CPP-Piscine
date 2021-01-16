/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 16:36:08 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 17:40:12 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human {

public:

	Human(void);
	~Human(void);

	std::string		identify(void) const;
	const Brain		&getBrain(void) const;

private:

	const Brain	_brain;

};

#endif
