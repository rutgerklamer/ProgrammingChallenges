#include <iostream>
#include <Windows.h>

int main()
{
	int totalst = 0;
	int totalsw = 0;
	for (int i = 0; i < 1000000; i++) {
		int doors[3] = { 0, 0, 0 };
		int m_r_door = rand() % 3;
		doors[m_r_door] = 1; 
		int a = rand()%3;
		int c = rand() % 3;
		while (c == a || c == m_r_door)
			c = rand() % 3; 
		int t = 0;
		while (t == c || t != m_r_door)
			t = rand() % 3;
		if (t == a && t == m_r_door)
			totalst++;
		else if (t != a && t == m_r_door) 
			totalsw++;
	}
	std::cout << "STAYING: " << totalst << " SWITCHING: " << totalsw << std::endl;
	return 0;
}
