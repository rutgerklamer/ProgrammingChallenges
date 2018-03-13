#include <iostream>
#include <string>

bool isValid(std::string s);

int main()
{
	srand(100);
	std::string random = { char(rand() % 9 + 49), char(rand() % 9 + 49), char(rand() % 9 + 49), char(rand() % 9 + 49) };
	std::string n;
	int i = 0;
	while (n != random) {
		while (std::getline(std::cin, n), !isValid(n)) { std::cout << "Input is wrong, enter another number" << std::endl; };
		for (int i = 0; i < random.size(); i++) {
			for (int j = 0; j < n.size(); j++) {
				if (j == i && random[i] == n[j]){
					std::cout << "BULL ";
				} else if (random[i] == n[j]){
					std::cout << "COW";
				}
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
bool isValid(std::string s)
{
	if (s.size() != 4) {
		return false;
	}
	char used[4] = { 0, 0, 0, 0 };
	for (int i = 0; i < s.size(); i++) {
		if (s[i] < 49 || s[i] > 59)
			return false;
		for (int j = 0; j < 4; j++) 
			if (s[i] == used[j])
				return false;
		used[i] = s[i];
	}
	return true;
}
