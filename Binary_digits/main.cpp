int main() {
	int n = 50;
	for (int i = (sizeof(int)* 8) - 1; i >= 0; i--)
			std::cout << ((n & (int(1) << i)) ? 1 : 0);
	return 0;
}
