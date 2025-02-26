#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You must give filename, search string and replace string." << std::endl;
		return 1;
	}

	std::string fileName = av[1];
	std::string outputFileName = fileName + ".replace";
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream input;
	std::ofstream output;
	std::string line;
	std::size_t pos = 0;

	if (fileName.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error: Any argument cannot be empty." << std::endl;
		return 1;
	}
	input.open(fileName.c_str());
	if (input.fail())
	{
		std::cout << "Error: Input file could not be open." << std::endl;
		return 1;
	}
	output.open(outputFileName.c_str());
	if (!output)
		{
		std::cout << "Error: Output file could not be open." << std::endl;
		return 1;
	}
	while (getline(input,line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		output << line << std::endl;
	}
}