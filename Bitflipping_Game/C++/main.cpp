#include <iostream>

int flipRowColumn(char p, int s);
void showTable(int n);

int main() {
	int starting = rand() % 511;
	int target = starting;
	char ip[] = { '0', '1', '2', 'a', 'b', 'c' };
	while (target == starting) 
		for (int i = 0; i < rand() % 5 + 5; i++)
			target = flipRowColumn(ip[rand()%6], target);

	while (starting != target) {
		std::cout << "\n\nCURRENT: " << std::endl;
		showTable(starting);
		std::cout << "\n\nTARGET: " << std::endl;
		showTable(target);
		char p = ' ';
		while ((p > '2' || p < '0') && (p > 'c' || p < 'a'))
			std::cin >> p;
		starting = flipRowColumn(p, starting);
	}
	return 0;
}

int flipRowColumn(char p, int s)
{
	switch (p) {
	case '0':
		return s ^ (1 << (8)) + (1 << (7)) + (1 << (6));
	case '1':
		return s ^ (1 << (5)) + (1 << (4)) + (1 << (3));
	case '2':
		return s ^ (1 << (2)) + (1 << (1)) + (1 << (0));
	case 'a':
		return s ^ (1 << (2)) + (1 << (5)) + (1 << (8));
	case 'b':
		return s ^ (1 << (1)) + (1 << (4)) + (1 << (7));
	case 'c':
		return s ^ (1 << (0)) + (1 << (3)) + (1 << (6));
	}
	return s;
}

void showTable(int n) {
	for (int i = 9; i >= 0; i--) {
		if ((n & (1 << i)) == 0)
			std::cout << 0 << std::flush;
		else
			std::cout << 1 << std::flush;
		if (i % 3 == 0 && i != 0)
			std::cout << std::endl;
	}
}
