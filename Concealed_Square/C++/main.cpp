#include <iostream>
#include <string>

int main() {
	for (unsigned long long i = 1389026620; i > 1010101010; i -= 10) {
		unsigned long long squared = i * i;
		std::string s = std::to_string(squared);
		if (s[0] == '1' && s[2] == '2' && s[4] == '3' && s[6] == '4' && s[8] == '5' && s[10] == '6' && s[12] == '7' && s[14] == '8' && s[16] == '9' && s[18] == '0')
		{
			std::cout << i << std::endl;
			return 0;
		}
	}
	return 0;
}
