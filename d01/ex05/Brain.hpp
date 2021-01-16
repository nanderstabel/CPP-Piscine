/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 17:19:36 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 17:19:51 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain {

public:

	Brain(void);
	~Brain(void);

	std::string		identify(void) const;

private:

	std::string	_identity;

};

#endif
