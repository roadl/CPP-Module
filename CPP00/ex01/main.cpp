#include "Contact.hpp"

int	main(void)
{
	std::string	line;

	Contact *c;

	c = new Contact("Fname", "Lname", "niiiickname", "010-4007-0958", "darkest secret");

	std::cout << "=== CPP00 ex01 PhoneBook ===" << std::endl;

	while (true)
	{
		std::cout << "Enter Command (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> line;
		if (line == "ADD")
		{
			c->print_short_form(1);
		}
		else if (line == "SEARCH")
		{

		}
		else if (line == "EXIT")
		{
			std::cout << "=== EXIT PhoneBook ===" << std::endl;
			return (0);
		}
		else
			std::cout << "Wrong Command! Retry!!" << std::endl;
	}
	return (0);
}
