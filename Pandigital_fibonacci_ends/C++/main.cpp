#include <iostream>
#include <vector>

std::vector<int> add(std::vector<int> a, std::vector<int> b);
std::vector<int> minus(std::vector<int> a, std::vector<int> b);

int main()
{
	std::vector<int> a = { 1 };
	std::vector<int> b = { 0 };
	int fibonacci_index = 0;
	while (true) {
		a = add(a, b);
		b = minus(a, b);
		fibonacci_index++;
		bool first[9] = { false };
		bool last[9] = { false };
		if (a.size() > 18) {
			for (int i = 0; i < 9; i++) {
				first[a[i]-1] = true;
				last[a[a.size()-1-i]-1] = true;
			}
			bool last_and_first_pandigital = true;
			for (int i = 0; i < 9; i++)
				if (!first[i] || !last[i])
					last_and_first_pandigital = false;
			if (last_and_first_pandigital)
				break;
		}

	}
	std::cout << fibonacci_index + 1 << std::endl;
	return 0;
}

std::vector<int> minus(std::vector<int> a, std::vector<int> b)
{
	std::reverse(a.begin(), a.end());
	std::reverse(b.begin(), b.end());
	while (b.size() < a.size())
		b.push_back(0);
	int res = 0;
	for (int i = 0; i < a.size(); i++) {
		b[i] += res;
		if (a[i] - b[i] < 0) {
			a[i] = 10 + a[i] - b[i];
			res = 1;
		}
		else {
			a[i] -= b[i];
			res = 0;
		}
	}
	std::reverse(a.begin(), a.end());
	return a;
}


std::vector<int> add(std::vector<int> a, std::vector<int> b)
{
	std::reverse(a.begin(), a.end());
	std::reverse(b.begin(), b.end());
	int res = 0;
	for (int i = 0; i < a.size(); i++) {
		if (i < b.size()) {
			b[i] += res;
			if (a[i] + b[i] >= 10) {
				res = 1;
				a[i] += b[i] - 10;
			}
			else {
				res = 0;
				a[i] += b[i];
			}
		}
	}
	if (res > 0)
		a.push_back(res);
	std::reverse(a.begin(), a.end());
	return a;
}
