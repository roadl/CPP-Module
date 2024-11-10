#include "Contact.hpp"

Contact::Contact(string f_name, string l_name, string nickname, \
		string phone_num, string darkest_secret)
{
	this->f_name = f_name;
	this->l_name = l_name;
	this->nickname = nickname;
	this->phone_num = phone_num;
	this->darkest_secret = darkest_secret;
}

Contact::~Contact()
{

}

static void print_string_short_form(string str)
{
	int	len = str.length();

	if (len >= 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	else
		for (int i = 0; i < 10 - len; i++)
			std::cout << ' ';
	std::cout << str;
}

void Contact::print_short_form(int idx)
{
	for (int i = 0; i < 9; i++)
		std::cout << ' ';
	std::cout << idx;
	std::cout << "|";
	print_string_short_form(f_name);
	std::cout << "|";
	print_string_short_form(l_name);
	std::cout << "|";
	print_string_short_form(nickname);
	std::cout << std::endl;
}

void Contact::print_all()
{

}
