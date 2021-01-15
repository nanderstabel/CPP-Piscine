/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 14:10:43 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/14 12:45:58 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int		main(void)
{
	Phonebook	phonebook;
	std::string	command;

	while (std::cin >> command) {
		if (command == "ADD") {
			phonebook.add();
		} else if (command == "SEARCH") {
			phonebook.search();
		} else if (command == "EXIT") {
			break;
		}
	}
	return 0;
}
