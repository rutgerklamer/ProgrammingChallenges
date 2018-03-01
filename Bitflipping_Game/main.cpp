
int main() {
	int starting = rand() % 511;
	int target = rand() % 511;
	while (target == starting)
		target = rand() % 511;

	std::cout << "STARTING: " << std::endl;
	showTable(starting);
	std::cout << "\n\nTARGET: " << std::endl;
	showTable(target);


	while (starting != target) {
		char p = ' ';
		while ((p > '2' || p < '0') && (p > 'c' || p < 'a'))
			std::cin >> p;

		switch (p) {
			case '0':
				starting ^= (1 << (8)) + (1 << (7)) + (1 << (6));
				break;
			case '1':
				starting ^= (1 << (5)) + (1 << (4)) + (1 << (3));
				break;
			case '2':
				starting ^= (1 << (2)) + (1 << (1)) + (1 << (0));
				break;
			case 'a':
				starting ^= (1 << (2)) + (1 << (5)) + (1 << (8));
				break;
			case 'b':
				starting ^= (1 << (1)) + (1 << (4)) + (1 << (7));
				break;
			case 'c':
				starting ^= (1 << (0)) + (1 << (3)) + (1 << (6));
				break;
		}
		std::cout << "\n\nCURRENT: " << std::endl;
		showTable(starting);	
		std::cout << "\n\nTARGET: " << std::endl;
		showTable(target);
	}
	return 0;
}

void showTable(int n) {
	for (int i = 9; i >= 0; i--) {
		if ((n & (1 << i)) == 0) {
			std::cout << 0 << std::flush;
		}
		else {
			std::cout << 1 << std::flush;
		}
		if (i % 3 == 0 && i != 0)
			std::cout << std::endl;
	}
}
