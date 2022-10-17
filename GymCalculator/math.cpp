#include<iostream>
#include"math.h"


float getWeight()
{
	float weightInput;
	std::cout << "Enter desired weight." << std::endl;
	std::cin >> weightInput;
	return weightInput;
};

void calcPlates(float weight)
{
	float plateWeight = weight - 45; //
	std::cout << plateWeight << std::endl;
	float sideWeight = plateWeight / 2;
	std::cout << sideWeight << std::endl;

	plates myPlates;

	//while (sideWeight > 0)
	//{
		while (sideWeight > 45)
		{
			++myPlates.fortyFives;
			sideWeight - 45;
		}
	//};

	std::cout << "2.5s: " << myPlates.twentyFives << std::endl;
	std::cout << "5s: " << myPlates.fives << std::endl;
	std::cout << "10s: " << myPlates.tens << std::endl;
	std::cout << "25s: " << myPlates.twentyFives << std::endl;
	std::cout << "45s: " << myPlates.fortyFives << std::endl;
};