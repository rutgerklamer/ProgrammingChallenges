int main() {
	int n = 9000;
	bool hasOne = false;
	for (int i = (sizeof(int)* 8) - 1; i >= 0; i--) {
		if ((n & (int(1) << i))) {
			std::cout << 1;
			hasOne = true;
		}
		else if (hasOne) {
			std::cout << 0;
		}
	}
	return 0;
}

