#pragma once

#include "GenericAlgorithm.h"

#include <string>

class NaiveAlgorithm: public GenericAlgorithm
{
public:
	NaiveAlgorithm();
	~NaiveAlgorithm();

	Strategy getStrategy(int numKeystrokes);
};
