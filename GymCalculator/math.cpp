#include "header.h"

float LBStoKg(float weightLBS)
{
	float weightKg = weightLBS / 2.205;
	return weightKg;
}

float KgtoLBS(float weightKg)
{
	float weightLBS = weightKg * 2.205;
	return weightLBS;
}

void calcPlatesLBS(float weightLBS)
{
	platesLBS myPlatesLBS;
	float plateWeight = weightLBS - 45; //
	std::cout << "Weight in plates: " << plateWeight << " lbs" << std::endl;
	float sideWeight = plateWeight / 2;
	std::cout << "Weight per side of bar: " << sideWeight << " lbs" << std::endl;

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

	std::cout << "-------------------------" << std::endl;
	std::cout << "2.5s: " << myPlatesLBS.twoPointFives << std::endl;
	std::cout << "5s:   " << myPlatesLBS.fives << std::endl;
	std::cout << "10s:  " << myPlatesLBS.tens << std::endl;
	std::cout << "25s:  " << myPlatesLBS.twentyFives << std::endl;
	std::cout << "45s:  " << myPlatesLBS.fortyFives << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Remainder: " << sideWeight << " lbs" << std::endl;
};

void calcPlatesKg(float weightKg)
{
	platesKg myPlatesKg;
	float plateWeight = weightKg - 20; //
	std::cout << "Weight in plates: " << plateWeight << " kg" << std::endl;
	float sideWeight = plateWeight / 2;
	std::cout << "Weight per side of bar: " << sideWeight << " kg" << std::endl;

	while (sideWeight >= 25)
	{
		++myPlatesKg.twentyFives;
		sideWeight = sideWeight - 25;
	};
	while (sideWeight >= 20)
	{
		++myPlatesKg.twenties;
		sideWeight = sideWeight - 20;
	};
	while (sideWeight >= 15)
	{
		++myPlatesKg.fifteens;
		sideWeight = sideWeight - 15;
	};
	while (sideWeight >= 10)
	{
		++myPlatesKg.tens;
		sideWeight = sideWeight - 10;
	};
	while (sideWeight >= 5)
	{
		++myPlatesKg.fives;
		sideWeight = sideWeight - 5;
	};
	while (sideWeight >= 2.5)
	{
		++myPlatesKg.twoPointFives;
		sideWeight = sideWeight - 2.5;
	};
	while (sideWeight >= 1.25)
	{
		++myPlatesKg.onePointTwoFives;
		sideWeight = sideWeight - 1.25;
	};

	std::cout << "-------------------------" << std::endl;
	std::cout << "1.25s: " << myPlatesKg.onePointTwoFives << std::endl;
	std::cout << "2.5s: " << myPlatesKg.twoPointFives << std::endl;
	std::cout << "5s:   " << myPlatesKg.fives << std::endl;
	std::cout << "10s:  " << myPlatesKg.tens << std::endl;
	std::cout << "15s:  " << myPlatesKg.fifteens << std::endl;
	std::cout << "20s:  " << myPlatesKg.twenties << std::endl;
	std::cout << "25s:  " << myPlatesKg.twentyFives << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Remainder: " << sideWeight << " lbs" << std::endl;
};