#include <iostream>

typedef std::string string;

class Contact
{
private:
	string	f_name;
	string	l_name;
	string	nickname;
	string	phone_num;
	string	darkest_secret;
public:
	Contact(string f_name, string l_name, string nickname, \
		string phone_num, string darkest_secret);
	Contact();
	~Contact();

	void	print_short_form(int idx);
	void	print_detail();
	bool	is_valid();
};
