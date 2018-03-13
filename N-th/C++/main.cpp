#include <iostream>
#include <string>

std::string getSuffix(int n);

int main()
{
	for (unsigned int i = 10000; i < 100000; i++) {
		std::cout << i << getSuffix(i) << std::endl;
	}
	return 0;
}

std::string getSuffix(int n)
{
	switch (n % 10)
	{
	case (1): 
		if (n % 100 != 11) 
			return "st";
		break;
	case (2): 
		if (n % 100 != 12) 
			return "nd";
		break;
	case (3): 
		if (n % 100 != 13) 
			return "rd";
	}
	return "th";
}

