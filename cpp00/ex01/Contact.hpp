#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iomanip>
#include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	setContact(void);
		std::string getfieldsInput(int i);
	private:
		std::string			fieldsInput[5];
		static std::string	labels[5];

};
//◦ Un contact possède les champs suivants : first name (prénom), last name
//(nom de famille), nickname (surnom), phone number (numéro de téléphone),
//et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne
//peuvent être vides.
#endif