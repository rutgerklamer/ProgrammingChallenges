#include <iostream>

int main()
{
	int n = 12345;
	int l = 0;
	for (int i = n; i != 0; i /= 10)
		l++;
	if (l % 2 == 0 || l < 3)
		return 1;
	else if (l == 3) 
		std::cout << n << std::endl;
	else 
		for (int i = 1, da = 1; i < l; i++, da *= 10)
			if (i >= floor(l / 2) && i < floor(l / 2) + 3)
				std::cout << ((n / da) % 10) << std::endl;
	return 0;
}
