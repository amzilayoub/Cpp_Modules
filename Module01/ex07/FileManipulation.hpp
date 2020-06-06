# pragma once
# include <iostream>
# include <fstream>

class FileManipulation
{
	public:
		int		state;
		std::string	error_message;
		std::string	fileName;
		std::string	outputFileName;
		std::ifstream	file;

	public:
		FileManipulation(std::string fileName);

	public:
		void replace(std::string oldString, std::string newString);
};
