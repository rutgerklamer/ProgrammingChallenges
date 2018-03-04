#include <iostream>

int main()
{
	int a[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	bool switched = true;
	while (switched) {
		switched = false;
		for (int i = 0; i < 10 - 1; i++) 
			if (a[i] > a[i + 1]) {
				std::swap(a[i], a[i + 1]);
				switched = true;
			}
	}
	for (int i = 0; i < 10; i++) 
		std::cout << a[i] << std::endl;
	return 0;
}
