#include "state.h"
#include <string>

State::State()
{
	printedChars = 0;
	selectedChars = 0;
	bufferChars = 0;
	keysPressed = 0;
}

State::~State()
{
}

std::string State::ctrlA() {
	selectedChars = printedChars;
	keysPressed++;
	return "S";
}

std::string State::ctrlC() {
	bufferChars = selectedChars;
	keysPressed++;
	return "C";
}

std::string State::ctrlV() {
	printedChars += bufferChars;

	/* if there is nothing in the buffer, press the A button instead */
	if (bufferChars == 0) {
		pressA();
		return "";
	}

	keysPressed++;
	return "P";
}

std::string State::pressA()
{
	printedChars++;
	keysPressed++;
	return "A";
}
