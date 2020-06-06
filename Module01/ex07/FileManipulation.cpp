# include "FileManipulation.hpp"

FileManipulation::FileManipulation(std::string fileName)
	: fileName(fileName)
{
	state = 0;
	this->file.open(fileName);
	if (!this->file.is_open())
	{
		this->state = 1;
		this->error_message = "Error, Cannot open the file";
		return ;
	}
};

void	FileManipulation::replace(std::string oldString, std::string newString)
{
	if (this->state)
		return ;

	int		oldStringLen;
	int		newStringLen;
	std::string	line;
	int		index;
	std::ofstream	outputFile;

	this->outputFileName = this->fileName + ".replace";
	oldStringLen = oldString.length();
	newStringLen = newString.length();
	outputFile.open(this->outputFileName);
	if (!outputFile.is_open())
	{
		this->file.close();
		this->state = 1;
		this->error_message = "Error, Cannot Open file " + this->outputFileName;
		return ;
	}
	while (getline(this->file, line))
	{
		index = 0;
		while (1)
		{
			index = line.find(oldString, index);
			if (index == std::string::npos)
				break;
			line.replace(index, oldStringLen, newString);
			index += oldStringLen;
		}
		outputFile << line << std::endl;
	}
	this->file.close();
	outputFile.close();
}
