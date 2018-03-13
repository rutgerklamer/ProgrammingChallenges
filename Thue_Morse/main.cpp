#include <iostream>
#include <string>

std::string thueMorse(std::string inp);

int main() {
	std::cout << thueMorse("0") << std::endl;
	return 0;
}

std::string thueMorse(std::string inp){
	std::string next = inp;;
	for (int i = 0; i < inp.size(); i++) {
		if (inp[i] == '0')
			next += "1";
		else if (inp[i] == '1')
			next += "0";
	}
	next += "\n";
	return (next.size() < 12800 ? thueMorse(next) : next);
}
