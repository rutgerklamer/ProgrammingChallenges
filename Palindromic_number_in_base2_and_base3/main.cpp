#include <iostream>
#include <string>
#include <stdint.h>

std::string toBase(int n, int b);
std::string reverse(std::string s);

int main()
{
	int64_t amount, i;
	i = amount = 0;
	while (i < 6) {
		std::string bin = toBase(amount, 2);
		std::string ter = toBase(amount, 3);
		if (bin == reverse(bin) && ter == reverse(ter)) {
			std::cout << amount << " : " << bin << "(2) : " << ter << "(3)" << std::endl;
			i++;
		}
		amount++;
	}
	return 0;
}

std::string reverse(std::string s)
{
	std::string reverse = s;
	std::reverse(reverse.begin(), reverse.end());
	return reverse;
}

std::string toBase(int n, int b)
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
