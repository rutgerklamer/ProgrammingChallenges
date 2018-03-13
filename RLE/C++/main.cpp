#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::string encode(std::string inp);
std::string decode(std::string inp);

int main()
{
	std::string RLE = "ABBCCCDDDDEEEEE";
	std::string RLD = "1A2B3C4D5C";
	std::cout << encode(RLE) << std::endl;
	std::cout << decode(RLD) << std::endl;
	return 0;
}

std::string encode(std::string inp)
{
	int a = 1;
	std::string encoded = "";
	for (int i = 0; i < inp.size(); i++)
	{
		if (inp[i] == inp[i + 1])
			a++;
		else {
			encoded += std::to_string(a) + inp[i];
			a = 1;
		}
	}
	return encoded;
}

std::string decode(std::string inp)
{
	std::string chars = "";
	for (int i = 0; i < inp.size(); i++) 
		if (inp[i] != ' ' && inp[i] < '0' || inp[i] != ' ' && inp[i] > '9') {
			chars += inp[i];
			inp[i] = ' ';
		}

	std::stringstream in(inp);
	std::vector<int> ints;
	copy(std::istream_iterator<int, char>(in), std::istream_iterator<int, char>(), back_inserter(ints));

	std::string decoded = "";
	for (int i = 0; i < ints.size(); i++)
		for (int j = 0; j < ints[i]; j++)
			decoded += chars[i];
	return decoded;
}
