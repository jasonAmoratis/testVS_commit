#pragma once

#include <string>

typedef std::string Strategy;

class GenericAlgorithm
{

public:
	GenericAlgorithm();
	~GenericAlgorithm();

	int measureCharsPrinted(Strategy keyActions);

	virtual Strategy getStrategy(int numKeystrokes) =0;
	Strategy keystrokes;

private:
	int validateStrategy(Strategy keyActions);

};

