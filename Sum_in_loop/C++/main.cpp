#include <iostream>

int main()
{	
	const int size = 32;
	int a[] = { 492, 1230, 401, 563, 608, 1200, 1132, 182, 1084, 395, 787, 587, 590, 13, 1158, 714, 205, 104, 1088, 1188, 490, 911, 1037, 900, 61, 413, 154, 799, 136, 937, 931, 619 };
	int sum = 0;
	for (int i = 0; i < size; i++) 
		sum += a[i];
	std::cout << sum << std::endl;
	return 0;
}
