#include "PhoneBook.hpp"
#include <sstream>

int	main(void)
{
	std::string	line;

	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	phone_num;
	std::string	darkest_secret;


	PhoneBook phoneBook;
	Contact *c;

	c = new Contact("Fname", "Lname", "niiiickname", "010-4007-0958", "darkest secret");


	while (true)
	{
		std::cout << "-------------------------------------------" << std::endl;
		std::cout << "Enter Command (ADD, SEARCH, EXIT): ";
		std::cin >> line;
		if (line == "ADD")
		{
			std::cout << "-------------------------------------------" << std::endl;
			std::cout << "Enter first name: ";
			std::cin >> f_name;
			std::cout << "Enter last name: ";
			std::cin >> l_name;
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			std::cout << "Enter phone number: ";
			std::cin >> phone_num;
			std::cout << "Enter darkest secret: ";
			std::cin >> darkest_secret;
			phoneBook.add_contact(Contact(f_name, l_name, nickname, phone_num, darkest_secret));
		}
		else if (line == "SEARCH")
		{
			phoneBook.list_all();
			std::cout << "Enter index: ";
			std::cin >> line;
			std::stringstream ss(line);
    		int value;

			if (ss >> value) {
				if (!ss.eof())
					std::cout << "Invalid Index!" << std::endl;
			}

			phoneBook.print_contact(value);
		}
		else if (line == "EXIT")
		{
			return 0;
		}
		else
			std::cout << "Wrong Command! Retry!!" << std::endl;
	}
	return 0;
}
