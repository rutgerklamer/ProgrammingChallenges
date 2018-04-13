#include <iostream>
#include <vector>

enum direction {
	UP, DOWN, LEFT, RIGHT
};

int main()
{
	const int size = 5;
	std::vector<std::vector<int>> grid(size);
	std::vector<int> tmp(size);
	std::fill(tmp.begin(), tmp.end(), 0);
	std::fill(grid.begin(), grid.end(), tmp);

	int x = size-1;
	int y = 0;
	int sum = size*size;
	direction dir = LEFT;
	while (x != size/2 || y != size/2) {
		grid[y][x] = sum;
		if (dir == LEFT) 
			if (x > 0) 
				if (grid[y][x - 1] == 0) {
					x--;
					sum--;
				}
				else 
					dir = DOWN;
			else 
				dir = DOWN;
		 else if (dir == DOWN) 
			if (y < size - 1) 
				if (grid[y + 1][x] == 0) {
					y++;
					sum--;
				}
				else 
					dir = RIGHT;
			else 
				dir = RIGHT;
		 else if (dir == RIGHT) 
			if (x < size - 1) 
				if (grid[y][x + 1] == 0) {
					x++;
					sum--;
				}
				else 
					dir = UP;
			else 
				dir = UP;
		 else if (dir == UP) 
			if (y > 0) 
				if (grid[y - 1][x] == 0) {
					y--;
					sum--;
				}
				else 
					dir = LEFT;
			else 
				dir = LEFT;
	}
	grid[size / 2][size / 2] = 1;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid.size(); j++)
			std::cout << grid[i][j] << " ";
		std::cout << std::endl;
	}
	return 0;
}