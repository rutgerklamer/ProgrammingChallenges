#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

std::vector<std::string> m_words;
std::map<std::string, std::vector<std::string>> m_word_map;

void makeChain();
void randomChain();

int main()
{
	std::fstream inf("main.ruc", std::ios::in);
	std::string rawprogram;
	std::string line;
	while (std::getline(inf, line)) 
		rawprogram += line;

	std::istringstream buf(rawprogram);
	std::istream_iterator<std::string> beg(buf), end;

	std::vector<std::string> tokens(beg, end);
	for (auto& s : tokens)
		m_words.push_back(s);

	makeChain();
	randomChain();
	return 0;
}

void makeChain(){
	for (int i = 0; i < m_words.size() - 1; i++) {
		m_word_map[m_words[i]].push_back(m_words[i + 1]);
	}
	m_word_map[m_words[m_words.size()-1]].push_back(m_words[0]);
}

void randomChain()
{
	std::map<std::string, std::vector<std::string>>::iterator it = m_word_map.begin();
	std::advance(it, rand() % m_word_map.size());
	std::string m_prev_word = it->first;
	for (int i = 0; i < 100; i++) {
		m_prev_word = m_word_map[m_prev_word][rand() % m_word_map[m_prev_word].size()];
		std::cout << m_prev_word << " " << (i % 5 == 0 && i != 0 ? "\n" : "");
	}
}
