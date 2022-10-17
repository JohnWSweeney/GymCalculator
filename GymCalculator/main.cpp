#include<iostream>
#include<string>
#include"math.h"

int main()
{
	std::string plateUnits = getUnits();
	while (true)
	{
		getWeight(plateUnits);
	};
};