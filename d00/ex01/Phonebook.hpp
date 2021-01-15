/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 09:20:57 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/14 14:43:55 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);

	void		add(void);
	void		search(void) const;

private:

	Contact 	_contacts[8];
	int			_nbContacts;
	
	static void	_printColumnNames(void);
	static void	_printContactList(int nbContacts, Contact const contacts[8]);
	static void	_printContactField(std::string field, std::string term);
	void _selectContact(void) const;
	void _printContact(int index) const;
};

#endif
