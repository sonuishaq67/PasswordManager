#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<char> str;
	std::string s = "Hello World!";

	std::vector<char> v(s.begin(), s.end());

	for (const char &c: v)
		std::cout << c;

	return 0;
}