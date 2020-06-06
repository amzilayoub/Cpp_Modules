# include "FileManipulation.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Usage => command [file] [string_to_replace] [new_string]" << std::endl;
		return (0);
	}

	FileManipulation file(argv[1]);
	file.replace(argv[2], argv[3]);
	if (file.state)
		std::cout << file.error_message;
	return (0);
}
