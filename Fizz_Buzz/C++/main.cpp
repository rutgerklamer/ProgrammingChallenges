#include <iostream>

int main()
{
	for (int i = 1; i < 100; i++)
	{
		std::string fizzbuzz;
		if (i % 3 == 0)
			fizzbuzz += "Fizz";
		if (i % 5 == 0)
			fizzbuzz += "Buzz";
		if (fizzbuzz.size() > 0)
			std::cout << fizzbuzz << "\n";
		else
			std::cout << i << "\n";
	}
	return 0;
}
