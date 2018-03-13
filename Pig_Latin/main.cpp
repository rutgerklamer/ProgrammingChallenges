#include <iostream>
#include <string>

int main()
{
	std::string m_inp = "banata";
	for (unsigned int i = 0; i < m_inp.size() - 2; i++)
	{
		std::swap(m_inp[i+1], m_inp[i+2]);
		std::swap(m_inp[i], m_inp[i+1]);
	}
	std::cout << m_inp << (m_inp[m_inp.size() - 1] == 'a' || m_inp[m_inp.size() - 1] == 'A' ? "y" : "ay") << std::endl;
	return 0;
}
