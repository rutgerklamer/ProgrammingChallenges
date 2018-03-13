#include <iostream>
#include <vector>

int main() {
	std::vector<int> used_ints, persnms;
	std::vector<float> pers;
	int max_amount = 10;
	int max_numbers = 10;
	for (int i = 0; i < max_numbers; i++)
		used_ints.push_back(rand() % max_amount);

	for (int j = 0; j < max_amount; j++) {
		int p = 0;
		for (int i = 0; i < max_numbers; i++) 
			if (used_ints[i] == j)
				p++;
			pers.push_back(100.0f + (float(p - max_numbers) / float(max_numbers) * 100.0f));
			persnms.push_back(j);
	}

	bool switched = true;
	while (switched) {
		switched = false;
		for (int i = 0; i < pers.size()-1; i++)
		if (pers[i] < pers[i + 1]) {
			std::swap(pers[i], pers[i + 1]);
			std::swap(persnms[i], persnms[i + 1]);
			switched = true;
		}
	}

	for (int i = 0; i < persnms.size(); i++)
		std::cout << persnms[i] << " : " << pers[i] << " %" << std::endl;

	return 0;
}
