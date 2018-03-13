#include <iostream>
#include <string>

int main()
{
	std::cout << "ENTER INPUT (3 CHARACTERS CONTAIN 'H'(HEADS) OR 'T'(TAILS))" << std::endl;
	std::string userinput;
	while (userinput.size() != 3 || !(userinput[0] == 'H' || userinput[0] == 'T') || !(userinput[1] == 'H' || userinput[1] == 'T') || !(userinput[2] == 'H' || userinput[2] == 'T')) {
		std::getline(std::cin, userinput);
		srand(userinput[0] * userinput[1] * userinput[2]);
	}
	std::string computerinput = userinput;
	while (computerinput == userinput) 
		computerinput = (rand() % 2 == 1 ? "H" : "T") + std::string(rand() % 2 == 1 ? "H" : "T") + (rand() % 2 == 1 ? "H" : "T");
	std::cout << "COMPUTER: " << computerinput << "\nUSER: " << userinput << std::flush;
	std::string sequence;
	bool won = false;
	while (!won)
	{
		sequence += (rand() % 2 == 1 ? "H" : "T");
		if (sequence.size() > 3 && userinput[0] == sequence[(sequence.size() - 3)] && userinput[1] == sequence[(sequence.size() - 2)] && userinput[2] == sequence[(sequence.size() - 1)]) {
			std::cout << "\nPLAYER WON: " << userinput << " FINISHSEQUENCE " << sequence << std::flush;
			won = true;
		} else if (sequence.size() > 3 && computerinput[0] == sequence[(sequence.size() - 3)] && computerinput[1] == sequence[(sequence.size() - 2)] && computerinput[2] == sequence[(sequence.size() - 1)]) {
			std::cout << "\nCOMPUTER WON: " << computerinput << ", FINISHSEQUENCE " << sequence << std::flush;
			won = true;
		}
	}
	return 0;
}
