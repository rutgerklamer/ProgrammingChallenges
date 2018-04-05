#include <iostream>

int modules(int n, int m);

int main()
{
	int sum_of_squares = 0;
	int sum_of_numbers = 0;
	for (int i = 1; i <= 100; i++) {
		sum_of_squares += i*i;
		sum_of_numbers += i;
	}
	std::cout << (sum_of_numbers * sum_of_numbers) - sum_of_squares << std::endl;
	return 0;
}
