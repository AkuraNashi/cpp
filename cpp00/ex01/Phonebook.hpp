#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

#define MAX 8

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		Contact		contacts[MAX];
		void		displayPrompt(void);
		void		addContact(void);
		void		searchContact(void);
	private:
		int			index;
};
#endif