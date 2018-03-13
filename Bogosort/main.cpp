#include <iostream>

bool isSorted(int *ap, int size);

int main()
{
	int a[] = { 3,2,1,6,7,5 };
	while (!isSorted(a, 6)) 
		std::swap(a[rand() % 6], a[rand() % 6]);
	for (int i = 0; i < 6; i++)
		std::cout << a[i] << std::endl;
	return 0;
}

bool isSorted(int *ap, int size)
{
	for (int i = 0; i < size - 1; i++)
		if (ap[i] > ap[i + 1])
			return false;
	return true;
}
