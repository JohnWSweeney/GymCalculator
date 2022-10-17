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
	plates myPlates;
	float plateWeight = weight - 45; //
	std::cout << "Plate weight: " << plateWeight << " lbs" << std::endl;
	float sideWeight = plateWeight / 2;
	std::cout << "Weight per side: " << sideWeight << " lbs" << std::endl;

	while (sideWeight >= 45)
	{
		++myPlates.fortyFives;
		sideWeight = sideWeight - 45;
	};
	while (sideWeight >= 25)
	{
		++myPlates.twentyFives;
		sideWeight = sideWeight - 25;
	};
	while (sideWeight >= 10)
	{
		++myPlates.tens;
		sideWeight = sideWeight - 10;
	};
	while (sideWeight >= 5)
	{
		++myPlates.fives;
		sideWeight = sideWeight - 5;
	};
	while (sideWeight >= 2.5)
	{
		++myPlates.twoPointFives;
		sideWeight = sideWeight - 2.5;
	};

	std::cout << "Remainder: " << sideWeight << " lbs" << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "2.5s: " << myPlates.twoPointFives << std::endl;
	std::cout << "5s:   " << myPlates.fives << std::endl;
	std::cout << "10s:  " << myPlates.tens << std::endl;
	std::cout << "25s:  " << myPlates.twentyFives << std::endl;
	std::cout << "45s:  " << myPlates.fortyFives << std::endl;
	std::cout << "-------------------------" << std::endl;
};