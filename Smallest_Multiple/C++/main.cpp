#include <iostream>

int main()
{
	int smallest_multiple = 0;
	while (smallest_multiple+=20) {
		bool div = true;
		for (int i = 2; i <= 20; i++) 
			if (smallest_multiple % i != 0)
				div = false;
		if (div)
			break;
	}
	std::cout << smallest_multiple << std::endl;
	return 0;
}
