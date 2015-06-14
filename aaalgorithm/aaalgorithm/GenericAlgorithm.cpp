#include "GenericAlgorithm.h"
#include "state.h"

#include <string>

GenericAlgorithm::GenericAlgorithm()
{
}


GenericAlgorithm::~GenericAlgorithm()
{
}

int GenericAlgorithm::measureCharsPrinted(Strategy keyActions)
{
	int charsPrinted;
	State game;
	for (Strategy::iterator it = keyActions.begin(); it != keyActions.end(); ++it) {
		if (*it == 'S') game.ctrlA();
		if (*it == 'C') game.ctrlC();
		if (*it == 'P') game.ctrlV();
		if (*it == 'A') game.pressA();
	}

	return game.printedChars;
}

int GenericAlgorithm::validateStrategy(Strategy keyActions)
{
	return 0;
}
