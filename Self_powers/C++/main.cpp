#include <iostream>
#include <vector>
#include <ctime>

std::vector<int> add(std::vector<int> a, std::vector<int> b);
std::vector<int> multiply(std::vector<int> a, std::vector<int> b);
void print_vector(std::vector<int> a);

int main()
{
	std::vector<int> a = { 0 };
	std::vector<int> sum = { 0 };
	for (int i = 0; i < 1000; i++) {
		a = add(a, std::vector<int>{1});
		std::vector<int> b = a;

		for (int j = 0; j < i; j++) 
			b = multiply(b, a);
		sum = add(b, sum);
	}
	print_vector(sum);
	return 0;
}

std::vector<int> multiply(std::vector<int> a, std::vector<int> b)
{
	int n1 = a.size();
	int n2 = b.size();
	if (n1 == 0 || n2 == 0)
		return a;
	std::vector<int> result(n1 + n2, 0);
	int i_n1 = 0;
	int i_n2 = 0;
	for (int i = n1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = a[i];
		i_n2 = 0;
		for (int j = n2 - 1; j >= 0; j--)
		{
			int n2 = b[j];
			int sum = n1*n2 + result[i_n1 + i_n2] + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}
	int i = result.size() - 1;
	while (i >= 0 && result[i] == 0)
		i--;
	if (i == -1)
		return a;
	std::vector<int> s;
	while (i >= 0)
		s.push_back(result[i--]);
	return s;
}

void print_vector(std::vector<int> a)
{
	for (int i = 0; i < a.size(); i++) 
		std::cout << a[i];
}

std::vector<int> add(std::vector<int> a, std::vector<int> b)
{
	if (b.size() > a.size())
		a = b;
	std::reverse(a.begin(), a.end());
	std::reverse(b.begin(), b.end());
	while (b.size() < a.size())
		b.push_back(0);
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

