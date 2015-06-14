#pragma once
#include <string>

class State
{
public:
	State();
	~State();
	int printedChars;
	int selectedChars;
	int bufferChars;

	std::string ctrlA();
	std::string ctrlV();
	std::string ctrlC();
	std::string pressA();
	int keysPressed;
};