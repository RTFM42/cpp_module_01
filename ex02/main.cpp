#include <iostream>

int main(void)
{
	std::string string;

	string = "HT THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string    address: " << &string << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << "stringPTR string: " << *stringPTR << std::endl;
	std::cout << "stringREF string: " << stringREF << std::endl;
}
