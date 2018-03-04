#include <iostream>
#include <string>

int main()
{
	const std::string CHAR[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz",
		"0123456789", "!\"#$%&'()*+,-./:;<=>?@[]^_{|}~" };
	int psslngth = 9;
	int pssmnt = 4;
	if (psslngth < 4)
		return 1;
	bool usedCHARS[] = { false,false,false,false };
	for (int j = 0; j < pssmnt; j++) {
		std::string psswrd;
		for (int i = 0; i < psslngth; i++) {
			int randomChar = rand() % 4;
			bool allchars = true;
			for (int k = 0; k < 4; k++) 
				if (!usedCHARS[k])
					allchars = false;
			if (!allchars && i < psslngth-4)
				while (usedCHARS[randomChar]) 
					randomChar = rand() % 4;
			psswrd += CHAR[randomChar][rand()%CHAR[randomChar].size()];
		}
		std::cout << psswrd << std::endl;
	}
	return 0;
}
