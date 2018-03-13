#include <iostream>
#include <string>

int main() {
	std::string lyrics[] = {
		"fly",
		"spider",
		"bird",
		"cat",
		"dog",
		"goat",
		"cow",
		"horse",
		"I don't know why she swallowed that fly.\nPerhaps she'll die\n",
		"That wiggled and jiggled and tickled inside her",
		"How absurd, to swallow a bird",
		"Imagine that. She swallowed a cat",
		"What a hog to swallow a dog",
		"She just opened her throat and swallowed that goat",
		"I don't know how she swallowed that cow",
		"She's dead, of course"
	};

	for (int i = 0; i < 7; i++) {
		std::cout << "there was an old lady who swallowed a " << lyrics[i] << "\n" << lyrics[i + 8] << "\n";
		for (int j = i; j > 0; j--) {
			std::cout << "She swallowed the " << lyrics[j] << " to catch the " << lyrics[j - 1] << "\n";
		}
		std::cout << (i == 1 ? lyrics[0 + 8] + "\n" : (i != 0 ? lyrics[1 + 8] + "\n" + lyrics[0 + 8] + "\n" : "\n"));
	}
	std::cout << "I once knew a lady who swallowed a " << lyrics[7] << "\n" << lyrics[7 + 8] << std::endl;
	return 0;
}
