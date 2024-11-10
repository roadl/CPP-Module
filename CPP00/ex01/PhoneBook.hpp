#include "Contact.hpp"

class PhoneBook
{
	private:
		int		index;
		Contact	contacts[8];
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contack();
		void	search();
};