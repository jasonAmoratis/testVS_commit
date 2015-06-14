#include <iostream>
#include <string>

#include "naiveAlgorithm.h"
#include "state.h"


int main() {
	NaiveAlgorithm test;
	int numberOfKeyStrokes = 5;

	std::string naiveKeystrokes = test.getStrategy(numberOfKeyStrokes);

    std::cout << "These are the keystrokes for the naive strategy:\n";
	std::cout << naiveKeystrokes << "\n";

	std::cout << "The above strategy was able to print " << test.measureCharsPrinted(naiveKeystrokes) << " characters.\n";

	std::cin >> naiveKeystrokes;

	return 0;
}