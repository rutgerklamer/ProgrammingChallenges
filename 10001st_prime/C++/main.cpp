#include <iostream>

bool is_prime(unsigned long long n);

int main() {
	int primes = 0;
	for (unsigned long long j = 0; j < 18446744073709551615; j++) {
		if (is_prime(j))
			primes++;
		if (primes >= 10001) {
			std::cout << j << std::flush;
			return 0;
		}
	}
	return 0;
}

bool is_prime(unsigned long long n)
{
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; (i*i) <= n; i += 2)
		if (n % i == 0) 
			return false;
	return true;
}