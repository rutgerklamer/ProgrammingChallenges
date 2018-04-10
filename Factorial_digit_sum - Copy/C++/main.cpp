#include <iostream>

unsigned long long get_divisors_sum(unsigned long long s);

int main()
{
	unsigned long long total = 0;
	for (int i = 1; i < 10000; i++) {
		unsigned long long dsum = get_divisors_sum(i);
		if (i == get_divisors_sum(dsum) && i != dsum) 
			total += i;
	}
	std::cout << total << std::endl;
	return 0;
}

unsigned long long get_divisors_sum(unsigned long long s) {
	int sum = 0;
	for (int i = 1; i < s; ++i)
		if (s % i == 0) 
			sum += i; 
	return sum;
}