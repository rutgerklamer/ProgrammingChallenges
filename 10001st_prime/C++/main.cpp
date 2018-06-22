#include <iostream>

bool is_prime(int n);

int main() {
	int primes, j = primes = 0;
	while(primes < 10001) {
		if (is_prime(j++))
			primes++;
	}
	std::cout << j -1 << std::flush;
	return 0;
}

bool is_prime(int n)
{
	if (n == 2) return true;
	if (n % 2 == 0 || n < 2) return false;
	for (int i = 3; (i*i) <= n; i += 2)
		if (n % i == 0) 
			return false;
	return true;
}
