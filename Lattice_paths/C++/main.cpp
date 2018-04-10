#include <iostream>

int main()
{
	const int x = 20;
	const int y = 20;
	unsigned long long grid[x+1][y+1];
	for (int i = 0; i < x+1; i++) 
		grid[i][y] = 1;
	for (int i = 0; i < y; i++)
		grid[x][i] = 1;
	for (int i = x - 1; i >= 0; i--)
		for (int j = y - 1; j >= 0; j--)
			grid[i][j] = grid[i + 1][j] + grid[i][j + 1];
	std::cout << grid[0][0]<< std::endl;
	return 0;
}