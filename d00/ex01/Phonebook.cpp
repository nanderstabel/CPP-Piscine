/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nstabel <nstabel@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 09:20:37 by nstabel       #+#    #+#                 */
/*   Updated: 2021/01/15 16:58:48 by nstabel       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void) {
	return;
}

void	Phonebook::add(void) {
	if (_nbContacts < 8) {
		std::cin.ignore();
		std::cout << "> first name: ";
		std::getline(std::cin, _contacts[_nbContacts].firstName);
		std::cout << "> last name: ";
		std::getline(std::cin, _contacts[_nbContacts].lastName);
		std::cout << "> nickname: ";
		std::getline(std::cin, _contacts[_nbContacts].nickname);
		std::cout << "> login: ";
		std::getline(std::cin, _contacts[_nbContacts].login);
		std::cout << "> postal address: ";
		std::getline(std::cin, _contacts[_nbContacts].postalAddress);
		std::cout << "> email address: ";
		std::getline(std::cin, _contacts[_nbContacts].emailAddress);
		std::cout << "> phone number: ";
		std::getline(std::cin, _contacts[_nbContacts].phoneNumber);
		std::cout << "> birthday date: ";
		std::getline(std::cin, _contacts[_nbContacts].birthdayDate);
		std::cout << "> favorite meal: ";
		std::getline(std::cin, _contacts[_nbContacts].favoriteMeal);
		std::cout << "> underwear color: ";
		std::getline(std::cin, _contacts[_nbContacts].underwearColor);
		std::cout << "> darkest secret: ";
		std::getline(std::cin, _contacts[_nbContacts].darkestSecret);
		_nbContacts++;
		std::cout << "Contact added to phonebook!" << std::endl;
	} else {
		std::cout << "Can not add contact, phonebook is full!" << std::endl;
	}
}

void	Phonebook::search(void) const {
	_printColumnNames();
	_printContactList(_nbContacts, _contacts);
	_selectContact();	
}

void	Phonebook::_printColumnNames(void) {
	std::cout << "\033[4m";
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	std::cout << "\033[0m";
}

void	Phonebook::_printContactList(int nbContacts,
	Contact const contacts[8]) {
	for (int i = 1; i <= nbContacts; i++) {
		std::cout << std::setw(10) << i << "|";
		_printContactField(contacts[i - 1].firstName, "|");
		_printContactField(contacts[i - 1].lastName, "|");
		_printContactField(contacts[i - 1].nickname, "");
		std::cout << std::endl;
	}
}

void	Phonebook::_printContactField(std::string field, std::string term) {
	if (field.length() <= 10) {
		std::cout << std::setw(10) << field << term;
	} else {
		std::cout << field.substr(0, 9) << "." << term;
	}
}

void	Phonebook::_selectContact(void) const {
	std::string	input;

	std::cin.ignore();
	std::cout << "> Enter index of the desired entry: ";
	std::getline(std::cin, input);
	if (input.length() == 1 && (0 < input[0] - '0' <= _nbContacts)) {
		_printContact(input[0] - '0');
	} else {
		std::cout << "Invalid index, or phonebook is empty!" << std::endl;
	}
}

void	Phonebook::_printContact(int i) const {
	std::cout << "> first name: " <<  _contacts[i - 1].firstName << std::endl;
	std::cout << "> last name: " << _contacts[i - 1].lastName << std::endl;
	std::cout << "> nickname: " << _contacts[i - 1].nickname << std::endl;
	std::cout << "> login: " << _contacts[i - 1].login << std::endl;
	std::cout << "> postal address: " << _contacts[i - 1].postalAddress << std::endl;
	std::cout << "> email address: " << _contacts[i - 1].emailAddress << std::endl;
	std::cout << "> phone number: " << _contacts[i - 1].phoneNumber << std::endl;
	std::cout << "> birthday date: " << _contacts[i - 1].birthdayDate << std::endl;
	std::cout << "> favorite meal: " << _contacts[i - 1].favoriteMeal << std::endl;
	std::cout << "> underwear color: " << _contacts[i - 1].underwearColor << std::endl;
	std::cout << "> darkest secret: " << _contacts[i - 1].darkestSecret << std::endl;
}