#include <iostream>
#include <string>

std::string get_spelled_num(int n);
std::string numbers[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
std::string eleventonineteen[] = { "", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
std::string tennum[] = { "", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };


int main()
{
	int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		sum += get_spelled_num(i).size();
	}
	std::cout << sum << std::endl;
	return 0;
}

std::string get_spelled_num(int n)
{
	if (n == 10)
		return "ten";
	else if(n < 10)
		return numbers[n];
	else if (n < 20)
		return eleventonineteen[n - 10];
	else if (n < 100) 
		return tennum[int(n / 10)] + numbers[lround((n / 10.0f - floor(n / 10.0f)) * 10.0f)];
	else if (n < 1000) {
		if ((float(n / 100.0f) - int(n / 100)) * 100 <= 10 || (float(n / 100.0f) - int(n / 100)) * 100 >= 20) 
			if (tennum[lround(((n / 100.0f) - (n / 100)) * 100) / 10] + numbers[lround(((float(n / 100.0f) - int(n / 100)) * 10.0f - int((float(n / 100.0f) - int(n / 100)) * 10.0f))*10.0f)] != "") 
				return numbers[int(n / 100)] + "hundredand" + tennum[lround(((n / 100.0f) - (n / 100)) * 100) / 10] + numbers[lround(((float(n / 100.0f) - int(n / 100)) * 10.0f - int((float(n / 100.0f) - int(n / 100)) * 10.0f))*10.0f)];
			else 
				return numbers[int(n / 100)] + "hundred";
		else 
			if (lround(((n / 100.0f) - (n / 100)) * 100) % 10 == 0) 
				return numbers[int(n / 100)] + "hundredand" + tennum[lround(((n / 100.0f) - (n / 100)) * 100) / 10];
			return numbers[int(n / 100)] + "hundredand" + eleventonineteen[lround(((n / 100.0f) - (n / 100)) * 100) - 10];
	}
	return "onethousand";
}

