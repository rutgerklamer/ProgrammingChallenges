#include <iostream>

int main()
{
	int n = 53535;
	int l = 0;
	for (int i = n; i != 0; i /= 10)
		l++;
	int da = 1;
	int a = 0;
	for (int i = 1; i <= l; i++, da *= 10)
		a += ((n / da) % 10) * (pow(10, l-i));
	std::cout << (a == n ? "palindrome number" : "no palindrome number") << std::endl;
	return 0;
}
