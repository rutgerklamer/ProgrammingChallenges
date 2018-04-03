#include <iostream>

int main()
{
	int b = 0;
	int a = 1;
	int sum = b;
	while (a < 4000000) {
		a += b;
		b = a - b;
		if (a % 2 == 0)
			sum += a;
	}
	std::cout << sum;
	return 0;
}
