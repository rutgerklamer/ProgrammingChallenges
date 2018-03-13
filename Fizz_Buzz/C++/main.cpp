#include <iostream>

int main()
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << "\n" << (i % 3 == 0 && i % 5 == 0 && i != 0 ? "FizzBuzz" : (i % 3 == 0 && i != 0 ? "Fizz" : (i % 5 == 0 && i != 0 ? "Buzz" : "")));
		if (i % 3 != 0 && i % 5 != 0 && i != 0)
			std::cout << i;
	}
	return 0;
}
