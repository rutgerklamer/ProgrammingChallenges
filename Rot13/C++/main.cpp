#include <iostream>

int main()
{
	const char* m_inp = "Hello world! ;)";
	for (unsigned int i = 0; i < strlen(m_inp); i++) {
			std::cout << (m_inp[i] >= 65 && m_inp[i] <= 90 || m_inp[i] >= 97 && m_inp[i] <= 122 ? (char)(m_inp[i] + 13 + 
      (m_inp[i] + 13 > 122 || m_inp[i] < 97 && m_inp[i] + 13 > 90 ? -26 : -0)) : m_inp[i]);
	}
	return 0;
}
