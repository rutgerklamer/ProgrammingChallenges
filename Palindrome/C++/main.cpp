#include <iostream>

int main()
{
	const char* m_inp = "racecar";
	for (unsigned int i = 0; i < floor(strlen(m_inp)); i++) {
		if (m_inp[i] == m_inp[strlen(m_inp)-i-1])
			std::cout << "Is palindrome";
		else {
			std::cout << "Isn't palindrome";
			break;
		}
	}
	return 0;
}
