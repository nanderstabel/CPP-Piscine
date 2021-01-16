/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/16 16:28:02 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/16 16:31:50 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string 	string = "HI THIS IS BRAIN";
	std::string*	stringPtr = &string;
	std::string&	stringRef = string;

	std::cout << "Using pointer: " << *stringPtr << std::endl;
	std::cout << "Using reference: " << stringRef << std::endl;
	return 0;
}
