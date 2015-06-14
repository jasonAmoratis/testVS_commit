#include "naiveStrategy.h"
#include "state.h"

NaiveAlgorithm::NaiveAlgorithm()
{
	std::string keystrokes = "";
}

NaiveAlgorithm::~NaiveAlgorithm()
{
}

std::string NaiveAlgorithm::getStrategy(int numKeystrokes)
{
	State game;

	while (game.keysPressed < numKeystrokes)
	{
		keystrokes += game.pressA();
	}

	return keystrokes;
}
