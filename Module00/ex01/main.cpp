# include <iostream>
# include <iomanip>
# include "phone_book.hpp"

int	add_new_contact(phone_book *list, int i)
{
	if (i == 8)
	{
		std::cout << "Contact List is Full" << std::endl;
		return (8);
	}
	std::cout << "First Name : ";
	std::cin >> list[i].first_name;
	std::cout << "Last Name : ";
	std::cin >> list[i].last_name;
	std::cout << "Nickname : ";
	std::cin >> list[i].nickname;
	std::cout << "Login : ";
	std::cin >> list[i].login;
	std::cout << "Postal Adress : ";
	std::cin >> list[i].postal_adress;
	std::cout << "Email : ";
	std::cin >> list[i].email;
	std::cout << "Phone Number : ";
	std::cin >> list[i].phone_number;
	std::cout << "Birthday : ";
	std::cin >> list[i].birthday;
	std::cout << "Favorite Meal : ";
	std::cin >> list[i].favorite_meal;
	std::cout << "Underwear Color : ";
	std::cin >> list[i].underwear_color;
	std::cout << "Darkest Secret : ";
	std::cin >> list[i].darkest_secret;
	std::cout << "\nContact Addes Successfully !" << std::endl;
	return (i + 1);
}

void	print_space(int i)
{
	while (i-- > 0)
		std::cout << ' ';
}

void	print_field(std::string str)
{
	int strlen;
	int j;

	if ((strlen = str.size()) > 10)
	{
		j = -1;
		while (j++ < 8)
			std::cout << str[j];
		std::cout << ".|";
	}
	else
	{
		std::cout << str;
		print_space(10 - strlen);
		std::cout << '|';
	}
}

void	print_columns(phone_book *list)
{
	int i;
	int j;
	int strlen;

	i = -1;
	std::cout << "  |";
	while (++i < COLUMNS_TO_SHOW)
		print_field(list[0].columns[i]);
	std::cout << '\n' << std::setfill('-') << std::setw(37) << '\n';
}

int	get_num(std::string str)
{
	int i;
	int res;

	i = -1;
	res = 0;
	while (str[++i])
	{
		if (!isdigit(str[i]))
			return (-1);
		res = (res * 10) + (str[i] - '0');
	}
	return (res);
}

void	print_list(phone_book *list, int len)
{
	int i;
	std::string resp;

	i = -1;
	print_columns(list);
	if (len == 0)
	{
		std::cout << std::setfill(' ') << std::setw(30) << "The Phone Book is empty !" << '\n';
		return ;
	}
	while (++i < len)
	{
		std::cout << (i + 1) << " |";
		print_field(list[i].first_name);
		print_field(list[i].last_name);
		print_field(list[i].nickname);
		std::cout << '\n';
	}
	std::cout << std::endl;
	std::cout << "Choose a Contact Index For Full Show ";
	std::cin >> resp;
	if ((i = get_num(resp)) > 0)
	{
		if (i >= 1 && i <= len)
			list[i - 1].display_contact();
	}
	else
		std::cout << "Sorry! It Seems like the it's not a number" << std::endl;
}

int	main(void)
{
	phone_book contacts_list[8];
	std::string cmd;
	int i;

	std::cout << "--- Welcome to your Phone Book ---" << std::endl;
	i = 0;
	while (1)
	{
		std::cout << "Command : ";
		std::cin >> cmd;
		if (!cmd.compare("EXIT"))
		{
			std::cout << "SEE YOU LATER !" << std::endl;
			return (0);
		}
		else if (!cmd.compare("ADD"))
		{
			i = add_new_contact(contacts_list, i);
		}
		else if (!cmd.compare("SEARCH"))
		{
			print_list(contacts_list, i);
		}
	}
	return (0);
}
