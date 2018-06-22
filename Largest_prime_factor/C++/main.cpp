#include <iostream>

int main() {
	long number = 600851475143;
	for (int i = 2; i < number; i++) {
		bool is_prime = true;
		for (int j = 2; j < i; j++) 
			if (i % j == 0)
				is_prime = false;
		if (is_prime && (number % i == 0)) 
			number = number / i;
	}
	std::cout << number << std::flush;
	return 0;
}
