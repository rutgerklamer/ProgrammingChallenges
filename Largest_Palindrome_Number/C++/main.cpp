#include <iostream>

void is_largest_palindrome(int n, int &largest);

int main()
{
	int largets_palindrome = 0;
	for (int i = 100; i < 999; i++) 
		for (int j = 100; j < 999; j++) 
			is_largest_palindrome(i*j, largets_palindrome);
	std::cout << largets_palindrome << std::endl;
	return 0;
}

void is_largest_palindrome(int n, int &largest)
{
	int nm = n, a = 0;
	while(nm > 0)
	{
		a = a*10 + (nm % 10);
		nm /= 10;
	}
	if (n > largest && a==n)
		largest = n;
}
