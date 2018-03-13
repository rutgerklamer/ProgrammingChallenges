#include <iostream>

int main()
{
	int b = 0;
	int a = 1;
	std::cout << b << "\n" << a << "\n";
	for (int i = 0; i < 40; i++) {
		a += b;
		std::cout << a << "\n";
		b = a - b;
	}
	return 0;
}
