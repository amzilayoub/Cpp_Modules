# pragma once
# include <iostream>

# define COLUMNS_TO_SHOW 3

class phone_book
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_adress;
		std::string email;
		std::string phone_number;
		std::string birthday;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
		std::string columns[11];

	public:
		phone_book();
		void display_contact();
};
