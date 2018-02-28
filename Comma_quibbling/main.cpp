#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> strings = { "ABC", "DEF", "G", "H" };
	for (int i = 0; i < strings.size(); i++) {
		std::cout << "{ ";
		for (int j = 0; j < i+1; j++) {
			std::cout << (j == 0 ? "" : (j < i ? ", " : " and ")) << strings[j] << std::flush;
		}
		std::cout << " }\n";
	}
	return 0;
}

