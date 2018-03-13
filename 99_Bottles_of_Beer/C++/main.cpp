#include <iostream>

int main()
{
	for (int i = 99; i > 0; i--) 
		std::cout << i << " Bottles of beer on the wall, " << i << " Bottles of beer.\nTake one down and pass it around, " << i-1 << " Bottles of beer on the wall\n\n";
	std::cout <<  "No more Bottles of beer on the wall, " <<  "No more Bottles of beer.\nGo to the store and buy some more, " << "99 Bottles of beer on the wall\n\n";
	return 0;
}
