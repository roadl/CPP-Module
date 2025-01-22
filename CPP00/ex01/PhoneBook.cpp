#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_contact(Contact c)
{
	this->contacts[index % 8] = c;
	index++;
}

void PhoneBook::list_all()
{
	std::cout << "     INDEX|FIRST_NAME| LAST_NAME|  NICKNAME" << std::endl;
	for (int i = 1; i <= 8; i++)
	{
		if (!contacts[i - 1].is_valid())
			break;
		contacts[i - 1].print_short_form(i);
	}
	std::cout << "-------------------------------------------" << std::endl;
}

void PhoneBook::print_contact(int index)
{
	if (index < 1 || index > 8 || !contacts[index - 1].is_valid())
		std::cout << "Invalid Index!" << std::endl;
	else
		contacts[index - 1].print_detail();
}