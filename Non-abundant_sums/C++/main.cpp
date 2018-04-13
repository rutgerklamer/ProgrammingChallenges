#include <iostream>

bool is_prime(unsigned long long n);

int main() {
	unsigned long long sum = 0;
	for (int i = 2; i < 2000000; i++)
		if (is_prime(i))
			sum += i;
	return 0;
}

bool is_prime(unsigned long long n)
{
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; (i*i) <= n; i += 2)
		if (n % i == 0) 
			return false;
	return true;
}