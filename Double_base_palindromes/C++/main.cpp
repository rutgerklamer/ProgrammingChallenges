#include <iostream>
#include <string>
#include <stdint.h>

std::string to_base(int n, int b);
std::string reverse(std::string s);
bool is_palindrome(int n);

int main()
{
	int64_t sum = 0;
	for (int i = 0; i < 1000000; i++) {
		std::string bin = to_base(i, 2);
		if (bin == reverse(bin) && is_palindrome(i)) 
			sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}

std::string reverse(std::string s)
{
	std::string reverse = s;
	std::reverse(reverse.begin(), reverse.end());
	return reverse;
}

std::string to_base(int n, int b)
{
	std::string base;
	if (b == 2) {
		bool hasOne = false;
		for (int i = (sizeof(int64_t)* 8) - 1; i >= 0; i--)
		if ((n & (int64_t(1) << i))) {
			base += "1";
			hasOne = true;
		}
		else if (hasOne)
			base += "0";
	}
	else {
		int64_t nn = 0;
		int64_t p = n;
		while (p > 0) {
			nn = nn * b + p;
			base += std::to_string(nn % b);
			p /= b;
		}
		std::string reversedTernary = base;
	}
	return base;
}

#include <iostream>

bool is_palindrome(int n)
{
	std::string l = std::to_string(n);
	return (l == reverse(l) ? true : false);
}

