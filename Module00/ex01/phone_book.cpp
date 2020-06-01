# include <iostream>
# include "phone_book.hpp"

phone_book::phone_book(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->login = "";
	this->postal_adress = "";
	this->email = "";
	this->phone_number = "";
	this->birthday = "";
	this->favorite_meal = "";
	this->underwear_color = "";
	this->darkest_secret = "";
	this->columns[0] = "First Name";
	this->columns[1] = "Last Name";
	this->columns[2] = "Nickname";
	this->columns[3] = "Login";
	this->columns[4] = "Postal Adress";
	this->columns[5] = "Email";
	this->columns[6] = "Phone Number";
	this->columns[7] = "Birthday";
	this->columns[8] = "Favorite Meal";
	this->columns[9] = "Underwear Color";
	this->columns[10] = "Darkest Secret";
}

void phone_book::display_contact()
{
	std::cout << "First Name : " << this->first_name << std::endl;
	std::cout << "Last Name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Login : " << this->login << std::endl;
	std::cout << "Postal Adress : " << this->postal_adress << std::endl;
	std::cout << "Email : " << this->email << std::endl;
	std::cout << "Phone Number : " << this->phone_number << std::endl;
	std::cout << "Birthday : " << this->birthday << std::endl;
	std::cout << "Favorite Meal : " << this->favorite_meal << std::endl;
	std::cout << "Underwear Color : " << this->underwear_color << std::endl;
	std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
	std::cout << std::endl;
}
