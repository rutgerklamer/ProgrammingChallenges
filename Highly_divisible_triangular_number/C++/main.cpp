#include <iostream>

int get_divisors(unsigned long long s);

int main() {
	unsigned long long sum = 0;
	int i = 0;
	while (true) {
		sum += i++;
		if (get_divisors(sum) >= 250) {
			std::cout << sum << std::endl;
			system("PAUSE");
			return 0;
		}
	}
	return 0;
}

int get_divisors(unsigned long long s) {
	int divisors = 0;
	for (unsigned long long i = 1; i <= sqrt(s); ++i)
		if (s % i == 0)
			divisors++;
	return divisors;
}
