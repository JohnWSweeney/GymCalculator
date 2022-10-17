#include<iostream>
#include<string>
#include"math.h"

std::string getUnits()
{
	std::string plateUnits;
	std::cout << "Are your plates in lbs or kgs?" << std::endl;
	std::cin >> plateUnits;
	return plateUnits;
};

void getWeight(std::string plateUnits)
{
	
	float weightInput;
	std::cout << "Enter desired weight in lbs." << std::endl;
	std::cin >> weightInput;
	
	if (plateUnits == "lbs")
	{
		calcPlatesLBS(weightInput);
	}
	else if (plateUnits == "kg")
	{
		calcPlatesKG(weightInput);
	}
	else
	{
		std::cout << "Try again dummy." << std::endl;
	}
};

void calcPlatesLBS(float weight)
{
	platesLBS myPlatesLBS;
	float plateWeight = weight - 45; //
	std::cout << "Plate weight: " << plateWeight << " lbs" << std::endl;
	float sideWeight = plateWeight / 2;
	std::cout << "Weight per side: " << sideWeight << " lbs" << std::endl;

	while (sideWeight >= 45)
	{
		++myPlatesLBS.fortyFives;
		sideWeight = sideWeight - 45;
	};
	while (sideWeight >= 25)
	{
		++myPlatesLBS.twentyFives;
		sideWeight = sideWeight - 25;
	};
	while (sideWeight >= 10)
	{
		++myPlatesLBS.tens;
		sideWeight = sideWeight - 10;
	};
	while (sideWeight >= 5)
	{
		++myPlatesLBS.fives;
		sideWeight = sideWeight - 5;
	};
	while (sideWeight >= 2.5)
	{
		++myPlatesLBS.twoPointFives;
		sideWeight = sideWeight - 2.5;
	};

	std::cout << "Remainder: " << sideWeight << " lbs" << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "2.5s: " << myPlatesLBS.twoPointFives << std::endl;
	std::cout << "5s:   " << myPlatesLBS.fives << std::endl;
	std::cout << "10s:  " << myPlatesLBS.tens << std::endl;
	std::cout << "25s:  " << myPlatesLBS.twentyFives << std::endl;
	std::cout << "45s:  " << myPlatesLBS.fortyFives << std::endl;
	std::cout << "-------------------------" << std::endl;
};

void calcPlatesKG(float weight)
{

};