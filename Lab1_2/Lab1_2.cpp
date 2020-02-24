#include <iostream>
#include <string>

int StringToInt(const std::string &str, int radix, bool &wasError)
{
	
}

std::string IntToString(int n, int radix, bool& wasError)
{

}

int main(int argc, char* inRatix[], char* outRatix[], char* number[])
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments count\n";
		std::cout << "Usage: CopyFile.exe <input file name> <output file name>\n";
		return 1;
	}

	bool err = false;
	int kol = StringToInt(,err);
	if (err)
	{
		std::cout << "Invalid arguments\n";
		return 1;
	}
	std::string result = StringToInt(,err);
	if (err)
	{
		std::cout << "Error\n";
		return 1;
	}

	std::cout << result;
}
