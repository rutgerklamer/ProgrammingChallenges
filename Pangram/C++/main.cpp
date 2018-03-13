#include <iostream>

int main()
{
	std::string m_inp = "abcaadefghijklmnopqrstuvwxyz";
	std::string m_used_chars = "";
	int m_total_alphabet_value = 0;
	for (int i = 'a'; i <= 'z'; i++)
		m_total_alphabet_value += i;
	for (unsigned int i = 0; i < m_inp.size(); i++)
		if (m_inp[i] >= 'a' && m_inp[i] <= 'z' && m_used_chars.find(m_inp[i]) == std::string::npos) {
			m_total_alphabet_value -= m_inp[i];
			m_used_chars += m_inp[i];
		}
	std::cout << (m_total_alphabet_value == 0 ? "It is a pangram" : "It isn't a pangram") << std::endl;
	return 0;
}
