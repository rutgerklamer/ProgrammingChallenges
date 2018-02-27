#include <iostream>

#include <vector>
int main()
{
	std::vector<int> evil;
	std::vector<int> odious;
	std::cout << "POPULATION: ";
	unsigned long long n = 1;
	for (int j = 0; j < 30; j++) {
		int k = 0;
		for (int i = 0; i < sizeof(unsigned long long) * 8; i++) {
			if (n & ((unsigned long long)1 << i))
				k++;
		}
		std::cout << k << " ";
		n *= 3;
	}
	for (unsigned long long i = 0; i < 60; i++) {
		int k = 0;
		for (int j = 0; j < sizeof(unsigned long long) * 8; j++)
			if (i & ((unsigned long long)1 << j)) 
				k++;
		if (k % 2) 
			odious.push_back(i);
		else 
			evil.push_back(i);
	}
	std::cout << "\nEVIL: ";
	for (int i = 0; i < evil.size(); i++)
		std::cout << evil[i] << " ";
	std::cout << "\nODIOUS: ";
	for (int i = 0; i < odious.size(); i++)
		std::cout << odious[i] << " ";
	return 0;
}




