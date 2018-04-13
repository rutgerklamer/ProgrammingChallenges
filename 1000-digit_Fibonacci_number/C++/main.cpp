#include <iostream>
#include <vector>

std::vector<int> add(std::vector<int> a, std::vector<int> b);
std::vector<int> minus(std::vector<int> a, std::vector<int> b);

int main()
{
	std::vector<int> a = { 1 };
	std::vector<int> b = { 0 };
	int fibonacci_index = 0;
	while (a.size() < 1000) {
		a = add(a,b);
		b = minus(a, b);
		fibonacci_index++;
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


