#include "start.h"

int main()
{
	std::cout << "gymCalculator v1.0.1\n";
	bool running = true;
	userData data;
	while (running)
	{
		getInput(data);
		selectFunctions(data);
	}
};