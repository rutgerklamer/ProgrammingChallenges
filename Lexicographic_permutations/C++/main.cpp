#include <iostream>
#include <algorithm>

int main()
{						  
	int str[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 1; i < 1000000; i++) 
		std::next_permutation(str, str+10);
	for (int i = 0; i < 10; i++) 
		std::cout << str[i] << std::flush;
	return 0;
}
