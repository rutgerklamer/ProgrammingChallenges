#include <iostream>

int main()
{
	int b, sum = b = 0;
	int a = 1;
	while ((a+=b) < 4000000) {
		if (a % 2 == 0)
			sum += a;
		b = a - b;
	}
	std::cout << sum;
	return 0;
}
