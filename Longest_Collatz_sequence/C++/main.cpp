#include <iostream>

int main() {
	int largest_sequence = 0;
	int starting_num = 0;
	for (int i = 1000000; i >= 2; i--) {
		unsigned long sum = i;
		int sequence_length = 1;
		while (sum > 1) {
			if ((sum % 2) == 0)
				sum /= 2;
			else 
				sum = sum * 3 + 1;
			sequence_length++;
		}
		if (sequence_length > largest_sequence) {
			largest_sequence = sequence_length;
			starting_num = i;
		}
	}
	std::cout << starting_num << std::endl;
	return 0;
}
