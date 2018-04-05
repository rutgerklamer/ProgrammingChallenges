#include <iostream>

bool is_palindrome(int n);

int main()
{
	int largets_palindrome = 0;
	for (int i = 100; i < 999; i++) {
		for (int j = 100; j < 999; j++) {
			int a = i*j;
			if (is_palindrome(a) && a > largets_palindrome) 
					largets_palindrome = a;
		}
	}
	std::cout << largets_palindrome << std::endl;
	return 0;
}

bool is_palindrome(int n)
{
	int l = 0;
	for (int i = n; i != 0; i /= 10)
		l++;
	int da = 1;
	int a = 0;
	for (int i = 1; i <= l; i++)
	{
		a += ((n / da) % 10) * (pow(10, l - i));
		da = da * 10;
	}
	return (a == n ? true : false);
}