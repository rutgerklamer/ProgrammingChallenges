#include <iostream>

int main()
{				
	int sum = 0;
	for (int i = 2; i < 354294; i++) {
		int l = 0;
		for (int j = i; j != 0; j /= 10)
			l++;
		int da = 1;
		int s = 0;
		for (int j = 1; j <= l; j++, da *= 10) 
			s += pow(((i / da) % 10),5);
		if (s == i) 
			sum += s;
	}
	std::cout << sum << std::endl;
	return 0;
}
