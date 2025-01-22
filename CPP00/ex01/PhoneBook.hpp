#include "Contact.hpp"

class PhoneBook
{
	private:
		int		index;
		Contact	contacts[8];
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact(Contact c);
		void	list_all();
		void	print_contact(int index);
};